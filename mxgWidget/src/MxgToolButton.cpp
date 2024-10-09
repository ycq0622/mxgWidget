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
	setPopupMode(QToolButton::InstantPopup);		// ���õ���ģʽ
	setToolButtonStyle(Qt::ToolButtonIconOnly);	// ���ð�ť��ʽ
	setStyleSheet("QToolButton{border:0px;}");	// ������ʽ��
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
