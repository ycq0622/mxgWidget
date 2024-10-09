#pragma once

#include <QObject>
#include <QColor>

#include "stdafx.hpp"
#include "def.hpp"

class MxgTheme;
class MxgThemePrivate  : public QObject
{
	Q_OBJECT
	Q_D_CREATE(MxgTheme)

private:
	MxgThemeType::ThemeMode m_themeMode{ MxgThemeType::ThemeMode::Light };
	QColor m_lightThemeColorList[193];
	QColor m_darkThemeColorList[193];
public:
	MxgThemePrivate(QObject* parent = nullptr);
	~MxgThemePrivate();

private:
	void __initThemeColor();
};
