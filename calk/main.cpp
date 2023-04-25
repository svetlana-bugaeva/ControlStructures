#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

//#define CALC_IF
#ifdef CALC_IF
	//cout << "Calc" << endl;
	double a, b;      //числа, вводимые с клавиатуры
	char s;           //Sign - знак операции
	cout << "ВВедите простое арифметическое выражение: ";
	cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error: No operation" << endl;
	}
#endif 

//#define CALC_SWITCH
#ifdef CALC_SWITCH
	double c, d;
	char e;
	cout << "Введите простое арифметическое выражение: ";
	cin >> c >> e >> d;
	switch (e)
	{
	case '+': cout << c << "+" << d << "=" << c + d << endl; break;
	case '-': cout << c << "-" << d << "=" << c - d << endl; break;
	case '*': cout << c << "*" << d << "=" << c * d << endl; break;
	case '/': cout << c << "/" << d << "=" << c / d << endl; break;
	default: cout << "Error: No operation" << endl;
	}
	
#endif //CALC_SWITCH

#define PALINDROM
#ifdef PALINDROM
	int number;                               //число,. введенное с клавиатуры
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	int revers = 0;
	while (buffer > 0)
	{
		revers *= 10;
		revers += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << revers << endl;
#endif PALINDROM 
}