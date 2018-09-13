#pragma once

// ��� ui Ŭ������ �⺻ Ŭ����
// ��� ui�� ���� Ư���� �����Ѵ�
class uiObject
{
protected:

	//uiObject* �� ���ҷ� ��� ����
	vector<uiObject*>	m_vecChild;
	vector<uiObject*>::iterator	m_iter;

	SYNTHESIZE(FPOINT, m_position, Position);
	SYNTHESIZE(uiObject*, m_pParent, Parent);
	RECT		m_rc;
	SYNTHESIZE(int, m_nTag, nTag);
	bool		m_isHidden;

public:
	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render(HDC hdc);

	virtual void addChild(uiObject* pChild);

	uiObject();
	virtual ~uiObject();
};

