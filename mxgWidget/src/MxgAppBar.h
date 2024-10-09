#pragma once

#include <QWidget>

#include "def.hpp"
#include "stdafx.hpp"

class MxgAppBarPrivate;
class MXG_EXPORT MxgAppBar : public QWidget
{
	Q_OBJECT
	Q_Q_CREATE(MxgAppBar)
	Q_PROPERTY_CREATE_Q_H(bool, IsStayTop);			// 是否模态置顶
	Q_PROPERTY_CREATE_Q_H(bool, IsFixedSize);		// 是否固定大小
	Q_PROPERTY_CREATE_Q_H(bool, IsDefaultClose);	// 是否默认关闭
	Q_PROPERTY_CREATE_Q_H(int, AppBarHeight);		// 是否appbar height

	Q_PROPERTY_CREATE_Q_H(int, CustomMaximumWidth); // 控件的最大宽度

	//Q_PROPERTY_CREATE_Q_H(QString, Title);			// 标题
	//Q_PROPERTY_CREATE_Q_H(QString, Icon);			// 图标

public:
	MxgAppBar(QWidget* parent = nullptr);
	~MxgAppBar();

	// 开放API
	// 设置自定义控件
	void setCustomWidget(MxgAppBarType::CustomArea customArea, QWidget* CustomWidget);
	void getCustomWidget() const;

	// 设置按钮的状态
	void setWindowButtonFlag(MxgAppBarType::ButtonType buttonType, bool isEnable = true);
	void setWindowButtonFlags(MxgAppBarType::ButtonFlags buttonFlags);

	MxgAppBarType::ButtonFlags getWindowButtonFlags() const;

	// 设置返回按钮的可用性
	void setRouteBackButtonEnable(bool isEnable = true);

	void closeWindow(); // 关闭窗口

#ifdef Q_OS_WIN
#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
	int takeOverNativeEvent(const QByteArray& eventType, void* message, qintptr* result); // 原生事件处理函数（新版本 Qt）
#else
	int takeOverNativeEvent(const QByteArray& eventType, void* message, long* result); // 原生事件处理函数（旧版本 Qt）
#endif
#endif

Q_SIGNALS: // 定义信号
	Q_SIGNAL void s_routeBackButtonClicked(); // 返回按钮点击信号
	Q_SIGNAL void s_navigationButtonClicked(); // 导航按钮被点击
	Q_SIGNAL void s_themeChangeButtonClicked(); // 主题变化按钮被点击
	Q_SIGNAL void s_closeButtonClicked(); // 关闭按钮被点击
	Q_SIGNAL void s_customWidgetChanged(); // 自定义控件变化

protected:
	virtual bool eventFilter(QObject* watched, QEvent* event) override;
};
