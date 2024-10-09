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

	// 绘制复杂控件
	void drawComplexControl(ComplexControl control, const QStyleOptionComplex* option,
		QPainter* painter, const QWidget* widget = nullptr) const override;

	// 绘制控件
	QSize sizeFromContents(ContentsType type, const QStyleOption* option, const QSize& size,
		const QWidget* widget = nullptr) const override;

private:
	void __drawIndicator(QPainter* painter, QStyleOptionToolButton * bopt, const QWidget* widget) const;	// 绘制指示器
	void __drawIcon(QPainter* painter, QRectF iconRect, QStyleOptionToolButton* bopt, const QWidget* widget) const;		// 绘制图标
	void __drawText(QPainter* painter, QRect textRect, QStyleOptionToolButton* bopt) const;		// 绘制文本
	void __calculateExpandIndicatorWidth(QStyleOptionToolButton* bopt, QWidget* widget) const;	// 计算展开指示器宽度
};
