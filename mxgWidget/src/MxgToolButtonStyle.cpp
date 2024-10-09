#include "MxgToolButtonStyle.h"

#include <algorithm>

#include "MxgTheme.h"

MxgToolButtonStyle::MxgToolButtonStyle(QStyle *style)
{
	m_pIsTransparent = true;	// Ĭ��͸��
	m_pExpandIconRotate = 0;	// Ĭ����ת�Ƕ�Ϊ0
	m_themeMode = MXG_THEME->getThemeMode();	// Ĭ������Ϊǳɫ
	connect(MXG_THEME, &MxgTheme::s_themeChanged, this, [=](MxgThemeType::ThemeMode themeMode) {
		m_themeMode = themeMode;
		});
}

MxgToolButtonStyle::~MxgToolButtonStyle()
{}

void MxgToolButtonStyle::drawComplexControl(
	ComplexControl control, 
	const QStyleOptionComplex * option, 
	QPainter * painter, const QWidget * widget) const
{
	switch (control)
	{
	case QStyle::CC_SpinBox:
		break;
	case QStyle::CC_ComboBox:
		break;
	case QStyle::CC_ScrollBar:
		break;
	case QStyle::CC_Slider:
		break;
	case QStyle::CC_ToolButton:
	{
		// ��������
		if (const QStyleOptionToolButton* bopt = qstyleoption_cast<const QStyleOptionToolButton*>(option))
		{
			if (bopt->arrowType != Qt::NoArrow)  // ��ͷ���Ͳ�Ϊ�޼�ͷ
			{
				break;
			}
			QRect toolButtonRect = bopt->rect;	// ��ȡ����
			if (!m_pIsTransparent)	// ��͸��
			{
				toolButtonRect.adjust(1, 1, -1, -1);	// ��������
			}
			painter->save();	// ���浱ǰ״̬
			
			// ������Ⱦ��ʾ QPainter::Antialiasing������� QPainter::TextAntialiasing���ı������ QPainter::SmoothPixmapTransform��ƽ�����ر任
			painter->setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing | QPainter::SmoothPixmapTransform);	

			painter->setPen(m_pIsTransparent ? Qt::transparent : MXG_THEME->getThemeColor(m_themeMode, MxgThemeType::ToolButtonBorder));	// ���û�����ɫ
			
			// ���Ʊ���
			if (bopt->state.testFlag(QStyle::State_Enabled))
			{
				if (bopt->state.testFlag(QStyle::State_Sunken))
				{
					painter->setBrush(m_pIsTransparent ? 
						MXG_THEME->getThemeColor(m_themeMode, MxgThemeType::ToolButtonTransparentPress) 
						: MXG_THEME->getThemeColor(m_themeMode, MxgThemeType::ToolButtonPress));
					
					painter->drawRoundedRect(toolButtonRect, 4, 4);	// ����Բ�Ǿ���
				}
				else
				{
					if (bopt->state.testFlag(QStyle::State_MouseOver) || bopt->state.testFlag(QStyle::State_On))
					{
						painter->setBrush(m_pIsTransparent ?
							MXG_THEME->getThemeColor(m_themeMode, MxgThemeType::ToolButtonTransparentHover)
							: MXG_THEME->getThemeColor(m_themeMode, MxgThemeType::ToolButtonHover));

						painter->drawRoundedRect(toolButtonRect, 4, 4);	// ����Բ�Ǿ���
					}
					else
					{
						if (!m_pIsTransparent)
						{
							painter->setBrush(MXG_THEME->getThemeColor(m_themeMode, MxgThemeType::ToolButtonBase));
							painter->drawRoundedRect(toolButtonRect, 4, 4);	// ����Բ�Ǿ���
						}
					}
				}
			}

			// ����ָʾ��
			__drawIndicator(painter, const_cast<QStyleOptionToolButton*>(bopt), widget);

			// ����ͼ��
			QRectF iconRect = subControlRect(control, bopt, QStyle::SC_ScrollBarAddLine, widget);
			int heightOffset = iconRect.height() * 0.05;
			iconRect.adjust(0, heightOffset, 0, -heightOffset);
			__drawIcon(painter, iconRect, const_cast<QStyleOptionToolButton*>(bopt), widget);

			// ��������
			__drawText(painter, subControlRect(control, bopt, QStyle::SC_ScrollBarAddLine, widget), const_cast<QStyleOptionToolButton*>(bopt));
	
			painter->restore();	// �ָ�֮ǰ��״̬
		}
	}

	return;
	case QStyle::CC_TitleBar:
		break;
	case QStyle::CC_Dial:
		break;
	case QStyle::CC_GroupBox:
		break;
	case QStyle::CC_MdiControls:
		break;
	case QStyle::CC_CustomBase:
		break;
	default:
		break;
	}

	QProxyStyle::drawComplexControl(control, option, painter, widget);
}

QSize MxgToolButtonStyle::sizeFromContents(ContentsType type, const QStyleOption* option, const QSize& size, const QWidget* widget) const
{
	if (type == QStyle::CT_ToolButton)
	{
		if (const QStyleOptionToolButton* bopt = qstyleoption_cast<const QStyleOptionToolButton*>(option))
		{
			QSize newSize = size;
			if (bopt->features.testFlag(QStyleOptionToolButton::HasMenu) && bopt->features.testFlag(QStyleOptionToolButton::MenuButtonPopup))
			{
				//newSize.setHeight(bopt->rect.height() + m_contentMargin);
				newSize.setWidth(bopt->rect.width() + m_contentMargin + 0.65 * std::min(bopt->iconSize.width(), bopt->iconSize.height()));
			}
			return newSize;
		}
	}
	return QProxyStyle::sizeFromContents(type, option, size, widget);
}

// ����ָʾ��
void MxgToolButtonStyle::__drawIndicator(QPainter* painter, QStyleOptionToolButton* bopt, const QWidget* widget) const
{
	if (bopt->features.testFlag(QStyleOptionToolButton::MenuButtonPopup))
	{
		// ��ȡָʾ������
		QRect indicatorRect = subControlRect(QStyle::CC_ToolButton, bopt, QStyle::SC_ToolButtonMenu, widget);
		
		// ָʾ�����
		if (bopt->state.testFlag(QStyle::State_Enabled) && bopt->activeSubControls.testFlag(QStyle::SC_ScrollBarSubLine))
		{
			painter->setBrush(MXG_THEME->getThemeColor(m_themeMode, MxgThemeType::ToolButtonIndicator));
			QPainterPath path;
			path.moveTo(indicatorRect.topLeft());
			path.lineTo(indicatorRect.right() - 4, indicatorRect.y());
			
			path.arcTo(QRect(indicatorRect.right() - 8, indicatorRect.y(), 8, 8), 90, -90);
			path.lineTo(indicatorRect.right(), indicatorRect.bottom() -4);

			path.arcTo(QRect(indicatorRect.right() - 8, indicatorRect.bottom() - 8, 8, 8), 0, -90);
			path.lineTo(indicatorRect.x(), indicatorRect.bottom());

			path.closeSubpath();
			painter->drawPath(path);
		}
		
		// ָʾ��
		painter->setBrush(bopt->state.testFlag(QStyle::State_Enabled) ? MXG_THEME->getThemeColor(m_themeMode, MxgThemeType::WindowText) : MXG_THEME->getThemeColor(m_themeMode, MxgThemeType::WindowTextDisable));
		QPainterPath indicatorPath;

		qreal indicatorHeight = qCos(30 * M_PI / 180.0) * indicatorRect.width() * 0.85;
		indicatorPath.moveTo(indicatorRect.x() + indicatorRect.width() * 0.15, indicatorRect.center().y());
		indicatorPath.lineTo(indicatorRect.right() - indicatorRect.width() * 0.15, indicatorRect.center().y());
		indicatorPath.lineTo(indicatorRect.center().x(), indicatorRect.center().y() + indicatorHeight / 2);
		indicatorPath.closeSubpath();
		painter->drawPath(indicatorPath);
	}
	else if (bopt->features.testFlag(QStyleOptionToolButton::HasMenu))
	{
		// չ��ָʾ��
		QSize iconSize = bopt->iconSize;
		painter->save();

		QRect toolButtonRect = bopt->rect;
		QFont iconfont = QFont("mxgicon");
		iconfont.setPixelSize(std::min(iconSize.height(), iconfont.weight()) * 0.75);

	}
}

void MxgToolButtonStyle::__drawIcon(QPainter* painter, QRectF iconRect, QStyleOptionToolButton* bopt, const QWidget* widget) const
{
}

void MxgToolButtonStyle::__drawText(QPainter* painter, QRect textRect, QStyleOptionToolButton* bopt) const
{
}

void MxgToolButtonStyle::__calculateExpandIndicatorWidth(QStyleOptionToolButton* bopt, QWidget* widget) const
{
}
