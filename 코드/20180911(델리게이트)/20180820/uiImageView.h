#pragma once
#include "uiObject.h"

// ui �̹����� ����ϴ� Ŭ����
class uiImageView : public uiObject
{
protected:
	image * m_pImg;
public:
	HRESULT init(const char* szImageName, float x, float y, bool hidden, int num);
	virtual void update() override;
	virtual void render(HDC hdc) override;
	uiImageView();
	virtual ~uiImageView();
};

