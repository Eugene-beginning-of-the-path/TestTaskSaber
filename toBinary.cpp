#include <iostream>

const int MAX_SIZE = 32;
/*
��� �������� ��������� ������������� ����� ��������� ������ ��������. 
����� ��� ������� ����� ���������� ����������� ��������� ���-��� ����������� ���. 
��� � ���� ������ ����� ��������� - �����, ��������� ������������� �������� 
����� ����������� � 10 �������� ������, ���������� ���������� ������ ����� ������������.
*/

void toBinary(int value)
{
	char buffer[MAX_SIZE]; 
													
	bool negative = false; 
	int iter = 0;

	if (value < 0)
	{
		value = -value;
		negative = true;
	}

	do
	{
		buffer[iter++] = char('0' + value % 2);
		value /= 2;
	} while (value); //� buffer ����� �������� �������� ������������� ����������� �����
					 //� �������� ������������������!! 

	//���� ����� �������������, �� � ������ ��� ��������� �������������
	//�������� ���� '-'
	if (negative)
		buffer[iter++] = '-';
	iter--;

	//������������� ������, �.�. ������ ��������� ������������� � ����� �������
	//(������ ����� � �� �������������, �.�. ������ � ���� ���, ���������� ��������
	//������������� ����� ����� � ���������� �� ������� �������� � ����� � ������
	for (int i = 0, j = iter; i <= iter / 2; )
	{
		char temp = buffer[i];
		buffer[i++] = buffer[j];
		buffer[j--] = temp;
	}

	//���� � ����� ������ --> � ������, ����� ���������� �������� �������������
	for (auto i = 0; i <= iter; i++)
		std::cout << buffer[i];
	std::cout << std::endl;

}

void task1()
{
	int number = 18;
	std::cout << "Binary representation of " << number << ": ";
	toBinary(number);

}