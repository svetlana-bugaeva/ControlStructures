#include<iostream>;
#include<conio.h>;
using namespace std;

#define esc 27
#define space 32
#define enter 13

void main()
{
	setlocale(LC_ALL, "Russian");
	char key;
	cout << "������� ����� �������" << endl;
	do
	{
		key = _getch();
		(int)key;
		switch (key)
		{
		case 'w':case 'W':   cout << "������" << endl; break;
		case 's':case 'S':   cout << "�����" << endl; break;
		case 'a':case 'A':   cout << "�����" << endl; break;
		case 'd':case 'D':   cout << "������" << endl; break;
		case space: cout << "������" << endl; break;
		case enter: cout << "�����" << endl; break;
		}
	} while (key != esc);

}