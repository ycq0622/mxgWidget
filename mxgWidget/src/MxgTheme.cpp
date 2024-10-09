#include "MxgTheme.h"

#include "MxgThemePrivate.h"

Q_SINGLETON_CREATE_CPP(MxgTheme)
MxgTheme::MxgTheme(QObject *parent)
	: QObject(parent), d_ptr(new MxgThemePrivate())
{
	Q_D(MxgTheme);
	d->q_ptr = this;
	d->__initThemeColor();
}

MxgTheme::~MxgTheme()
{}

void MxgTheme::setThemeMode(MxgThemeType::ThemeMode themeMode)
{
	Q_D(MxgTheme);
	if (d->m_themeMode == themeMode)
	{
		return;
	}
	d->m_themeMode = themeMode;
	Q_EMIT s_themeChanged(themeMode);
}

MxgThemeType::ThemeMode MxgTheme::getThemeMode() const
{
	Q_D(const MxgTheme);
	return d->m_themeMode;

	return MxgThemeType::ThemeMode();
}

/// <summary>
/// ������ӰЧ��
/// </summary>
/// <param name="painter"></param>
/// <param name="shadowderWidth"></param>
/// <param name="rect"></param>
/// <param name="radius"></param>
/// <param name="alpha"></param>
/// <param name="color"></param>
void MxgTheme::drawEffectShadow(QPainter* painter, const int shadowderWidth, const QRect& rect, qreal radius, qreal alpha) 
{
	Q_D(MxgTheme);
	painter->save(); // ���浱ǰ״̬
	painter->setRenderHint(QPainter::Antialiasing); // ���ÿ����

	QPainterPath path;	// ����·��
	path.setFillRule(Qt::WindingFill);		// ���������� Qt::WindingFill���������
	QColor color = d->m_themeMode == MxgThemeType::ThemeMode::Light 
		? QColor(0x60, 0x5F, 0x61) : QColor(0x9C, 0x9B, 0x9E); // ��Ӱ��ɫ

	for (int i = 0; i < shadowderWidth; i++)
	{
		QPainterPath path; // ����·��
		path.setFillRule(Qt::WindingFill);		// ���������� Qt::WindingFill���������
		
		int alpha = 255 - (i * 255 / shadowderWidth);		// ����͸����
		color.setAlpha(alpha > 255 ? 255 : alpha);			// ������ɫ͸����
		
		painter->setPen(color);		// ���û�����ɫ
		painter->drawPath(path);	// ����·��
	}
	painter->restore();	// �ָ�֮ǰ��״̬
}

const QColor& MxgTheme::getThemeColor(MxgThemeType::ThemeMode themeMode, MxgThemeType::ThemeColor themeColor) const
{
	// TODO: �ڴ˴����� return ���

	Q_D(const MxgTheme);
	if (themeMode == MxgThemeType::Light)
	{
		return d->m_lightThemeColorList[themeColor];
	}
	else
	{
		return d->m_darkThemeColorList[themeColor];
	}
}
// #include "MxgTheme.moc"