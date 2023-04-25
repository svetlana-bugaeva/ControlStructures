#include<iostream>
using namespace std;

//#define YROK
//#define PALINDROM                         
#define BILET

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef YROK
	int number;                //число введенное с клавиатуры1
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	int reverse = 0;
	while (buffer > 0)
	{
		reverse *= 10;          //1. сдвигаем число на 1 разряд влево
		reverse += buffer % 10; //2. добавляем следующий младший разряд
		buffer /= 10;           //3. удаляем полученный разряд из исходного числа 
		                        //(в противном случае мы всегда будем получать один и тот же разряд)
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
#endif YROK

#ifdef PALINDROM                           
	int number; cout << "Введите число: "; 
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
		cout << "Палиндром";
	}
	else
	{
		cout << "Не палиндром";
	}
#endif PALINDROM

#ifdef BILET
	int number;
	cout << "Введите номер билета: "; cin >> number;
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
		cout << "Счастливый билет" << endl;
	}
	else
	{
		cout << "Обычный билет" << endl;
	}

#endif BILET
}