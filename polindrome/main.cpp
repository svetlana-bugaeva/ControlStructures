#include<iostream>
using namespace std;

//#define YROK
//#define PALINDROM                         
#define BILET

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef YROK
	int number;                //����� ��������� � ����������1
	cout << "������� �����: "; cin >> number;
	int buffer = number;
	int reverse = 0;
	while (buffer > 0)
	{
		reverse *= 10;          //1. �������� ����� �� 1 ������ �����
		reverse += buffer % 10; //2. ��������� ��������� ������� ������
		buffer /= 10;           //3. ������� ���������� ������ �� ��������� ����� 
		                        //(� ��������� ������ �� ������ ����� �������� ���� � ��� �� ������)
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
#endif YROK

#ifdef PALINDROM                           
	int number; cout << "������� �����: "; 
	cin >> number;
	int buffer = number;
	int reverse = 0;
	while (buffer > 0);
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	if (number == reverse)
	{
		cout << "���������";
	}
	else
	{
		cout << "�� ���������";
	}
#endif PALINDROM

#ifdef BILET
	int number;
	cout << "������� ����� ������: "; cin >> number;
	int left_side, right_side;
	left_side = right_side = 0;
	while (number > 1000)
	{
		left_side += number % 10;
		number /= 10;
	}
	while (number)
	{
		right_side += number % 10;
		number /= 10;
	}
	cout << left_side << endl;
	cout << right_side << endl;
	if (left_side == right_side)
	{
		cout << "���������� �����" << endl;
	}
	else
	{
		cout << "������� �����" << endl;
	}

#endif BILET
}