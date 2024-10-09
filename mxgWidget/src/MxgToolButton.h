#pragma once

#include <QToolButton>

#include "def.hpp"
#include "stdafx.hpp"

class MxgToolButtonPrivate;
class MXG_EXPORT MxgToolButton : public QToolButton
{
	Q_OBJECT
	Q_Q_CREATE(MxgToolButton)
	//Q_PRIVATE_CREATE_Q_H(int, BorderRadius)
	//Q_PRIVATE_CREATE_Q_H(int, IsSelected)


public:
	explicit MxgToolButton(QToolButton *parent = nullptr);
	~MxgToolButton();
	
	void setTransparent(bool isTransparent);	// 设置透明状态
	void getTransparent() const;				// 获取透明状态
	
	void setIcon(const QIcon& icon);			// 设置图标

protected:
	virtual bool eventFilter(QObject* watched, QEvent* event) override;
};
