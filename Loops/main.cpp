#include <iostream>
#include<conio.h>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");
//#define WHILE_1
#ifdef WHILE_1
	int i = 0; // счетчик цикла
	int n;    // количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << i << "Loops" << endl;
		i++;
	}
#endif // WHILE_1

//#define KEY
#ifdef KEY
	char key;     //переменная будет хранить код нажато клавиши
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	}   while (true);
#endif KEY

}
