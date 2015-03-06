#include "stdafx.h"
#include "VectorProcessor.h"

void ProcessVector(std::vector<double> & numbers)
{
	//numbers;

	double foundPositiveNumber = 0;

	for (auto number : numbers)
	{
		if (number > 0)
		{
			foundPositiveNumber = number;
			break;
		}
	}

	for (auto &number : numbers)
	{
		number += foundPositiveNumber;
	}

	// TODO:	1 ����� ������� �������������� ������������� ��������� �������
	//			2 ��������� ������ ������� ������ �� ������� ��������������
	//			3 ...
	//			4 PROFIT!
}