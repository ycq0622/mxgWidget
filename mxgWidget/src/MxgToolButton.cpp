#include "MxgToolButton.h"

#include <QEvent>
#include <QMouseEvent> 
#include <QPropertyAnimation>

#include "MxgToolButtonPrivate.h"

MxgToolButton::MxgToolButton(QToolButton*parent)
	: QToolButton(parent), d_ptr(new MxgToolButtonPrivate())
{
	Q_D(MxgToolButton);
	d->q_ptr = this;
	setIconSize(QSize(32, 32));
	setPopupMode(QToolButton::InstantPopup);		// 设置弹出模式
	setToolButtonStyle(Qt::ToolButtonIconOnly);	// 设置按钮样式
	setStyleSheet("QToolButton{border:0px;}");	// 设置样式表
}

MxgToolButton::~MxgToolButton()
{}

void MxgToolButton::setTransparent(bool isTransparent)
{
}

void MxgToolButton::getTransparent() const
{
}

void MxgToolButton::setIcon(const QIcon& icon)
{
}

bool MxgToolButton::eventFilter(QObject* watched, QEvent* event)
{
	return false;
}
