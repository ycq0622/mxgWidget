#pragma once

#include <QPainter>
#include <QPainterPath>
#include <QObject>

#include "def.hpp"
#include "stdafx.hpp"
#include "singleton.hpp"


#define MXG_THEME MxgTheme::getInstance()
#define MXG_THEME_COLOR(themeMode, themeColor) MXG_THEME->getThemeColor(themeMode, MxgThemeType::ThemeColor)

class MxgThemePrivate;
class MXG_EXPORT MxgTheme : public QObject
{
	Q_OBJECT
	Q_Q_CREATE(MxgTheme)
	Q_SINGLETON_CREATE_H(MxgTheme)
public:
	explicit MxgTheme(QObject* parent = nullptr);
	~MxgTheme();

public:
	void setThemeMode(MxgThemeType::ThemeMode themeMode);
	MxgThemeType::ThemeMode getThemeMode() const;

	void drawEffectShadow(QPainter* painter, const int shadowderWidth, const QRect& rect, qreal radius, qreal alpha);
	
	const QColor& getThemeColor(MxgThemeType::ThemeMode themeMode, MxgThemeType::ThemeColor themeColor) const;

Q_SIGNALS:
	Q_SIGNAL void s_themeChanged(MxgThemeType::ThemeMode themeMode);

};
