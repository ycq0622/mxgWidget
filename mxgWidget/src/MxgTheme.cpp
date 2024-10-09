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
/// 绘制阴影效果
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
	painter->save(); // 保存当前状态
	painter->setRenderHint(QPainter::Antialiasing); // 设置抗锯齿

	QPainterPath path;	// 创建路径
	path.setFillRule(Qt::WindingFill);		// 设置填充规则 Qt::WindingFill：非零填充
	QColor color = d->m_themeMode == MxgThemeType::ThemeMode::Light 
		? QColor(0x60, 0x5F, 0x61) : QColor(0x9C, 0x9B, 0x9E); // 阴影颜色

	for (int i = 0; i < shadowderWidth; i++)
	{
		QPainterPath path; // 创建路径
		path.setFillRule(Qt::WindingFill);		// 设置填充规则 Qt::WindingFill：非零填充
		
		int alpha = 255 - (i * 255 / shadowderWidth);		// 计算透明度
		color.setAlpha(alpha > 255 ? 255 : alpha);			// 设置颜色透明度
		
		painter->setPen(color);		// 设置画笔颜色
		painter->drawPath(path);	// 绘制路径
	}
	painter->restore();	// 恢复之前的状态
}

const QColor& MxgTheme::getThemeColor(MxgThemeType::ThemeMode themeMode, MxgThemeType::ThemeColor themeColor) const
{
	// TODO: 在此处插入 return 语句

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