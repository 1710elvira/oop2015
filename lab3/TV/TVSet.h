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
	int GetChannel() const;
private:
	bool m_isTurnedOn;

};

