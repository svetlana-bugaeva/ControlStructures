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
	cout << "Нажмите любую клавишу" << endl;
	do
	{
		key = _getch();
		(int)key;
		switch (key)
		{
		case 'w':case 'W':   cout << "Вперед" << endl; break;
		case 's':case 'S':   cout << "Назад" << endl; break;
		case 'a':case 'A':   cout << "Влево" << endl; break;
		case 'd':case 'D':   cout << "Вправо" << endl; break;
		case space: cout << "Прыжок" << endl; break;
		case enter: cout << "Огонь" << endl; break;
		}
	} while (key != esc);

}