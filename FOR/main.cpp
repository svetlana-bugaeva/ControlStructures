#include<iostream>
using namespace std;
using std::cout;
//#define FOR_1
//#define POWER
//#define FOR
//#define TABLICA_YMN
//#define PIFAGOR
//#define FIBONACHCHI
//#define PROST_CHISLA
 

void main()
{
	setlocale(LC_ALL,"Russian");
#ifdef FOR_1
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	for (
		int i = 0; 
		i < n; 
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif FOR_1

#ifdef POWER
	double a;     //��������� �������
	int n;        //���������� �������
	double N = 1; //�������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	if (n < 0); 
	{
		a = 1 / a; //��������� ��������� � ����������� 
   		n = -n;    //������ ���� ��������� �� ���������������
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif POWER

#ifdef FOR
	for (int i = 0; i < 256; i++)
	{
		cout << (char)i << " ";
	}
#endif FOR

#ifdef TABLICA_YMN
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 10)cout << " ";
			if (i * j < 100)cout << " ";
			cout << i * j << endl;
		}
	cout << endl;
	}
#endif TABLICA_YMN

#ifdef PIFAGOR 
	int a = 10;   //������ �� �����������;
	int b = 10;   //������ �� ���������;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			cout << "\t" << i * j << " ";
		}
		cout << endl;
	}
#endif PIFAGOR

#ifdef FIBONACHCHI
	int a = n;    //����� ���������
	cout << "������� ���������� �����: "; cin >> n;
	for (int a = 0; b = 1; c = a + b; a < )
		cout << endl;
#endif FIBONACHCHI

#ifdef PROST_CHISLA
	int n;      //������� �����
	cout << "������� ���������� �����: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true; //����������� ��� ����� �������,
		                    // ��, ��� ����� ���������:
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break; //���� ������� �����������, ������ �� ��� 
				       //���������, ��� ����� ���������, � ��� ������
				       //��� ������ ������ ��� ������, �� ��� ����� �� ��� �����.
				//�������� ����� break ��������� ������� ��������, � ��� �����������
				//break; ������� ������ j-� for, �� i-� for, ��� ����� �� ���������
			}
		}
		if(simple)cout << i << "\t";
	}
#endif PROST_CHISLA
}