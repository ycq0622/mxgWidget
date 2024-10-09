#pragma once

#include <QProxyStyle>
#include <QStyleOptionToolButton>
#include <QPainter>
#include <QtMath>
#include <QPainterPath>

#include "stdafx.hpp"
#include "def.hpp"

class MxgToolButtonStyle : public QProxyStyle
{
	Q_OBJECT
	Q_PRIVATE_CREATE(bool, IsTransparent)
	Q_PROPERTY_CREATE(qreal, ExpandIconRotate)

private:
	MxgThemeType::ThemeMode m_themeMode;

	int m_contentMargin{ 6 };

public:
	explicit MxgToolButtonStyle(QStyle* style = nullptr);
	~MxgToolButtonStyle();

	// ���Ƹ��ӿؼ�
	void drawComplexControl(ComplexControl control, const QStyleOptionComplex* option,
		QPainter* painter, const QWidget* widget = nullptr) const override;

	// ���ƿؼ�
	QSize sizeFromContents(ContentsType type, const QStyleOption* option, const QSize& size,
		const QWidget* widget = nullptr) const override;

private:
	void __drawIndicator(QPainter* painter, QStyleOptionToolButton * bopt, const QWidget* widget) const;	// ����ָʾ��
	void __drawIcon(QPainter* painter, QRectF iconRect, QStyleOptionToolButton* bopt, const QWidget* widget) const;		// ����ͼ��
	void __drawText(QPainter* painter, QRect textRect, QStyleOptionToolButton* bopt) const;		// �����ı�
	void __calculateExpandIndicatorWidth(QStyleOptionToolButton* bopt, QWidget* widget) const;	// ����չ��ָʾ�����
};
