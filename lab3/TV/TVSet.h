#pragma once


class CTVSet
{
public:
	CTVSet();
	~CTVSet();
	bool IsTurnedOn() const;
	bool TurnOn();
	/*��������� ���������
	���������� true, ���� 
	��������� ��� �������*/
	bool TurnOff();
private:
	bool m_isTurnedOn;
};

