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
	cout << "Введите количество итераций: "; cin >> n;
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
	double a;     //основание степени
	int n;        //показатель степени
	double N = 1; //степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0); 
	{
		a = 1 / a; //переносим основание в знаменатель 
   		n = -n;    //меняем знак основания на противоположный
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
	int a = 10;   //строка по горизонтали;
	int b = 10;   //строка по вертикали;
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
	int a = n;    //число Фибоначчи
	cout << "Введите предельное число: "; cin >> n;
	for (int a = 0; b = 1; c = a + b; a < )
		cout << endl;
#endif FIBONACHCHI

#ifdef PROST_CHISLA
	int n;      //простое число
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true; //предположим что число простое,
		                    // но, его нужно проверить:
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break; //если условие выполнилось, значит мы уже 
				       //выяснилти, что число составное, а это значит
				       //что искать дальше нет смысла, мы уже нашли всё что нужно.
				//ключевое слово break прерывает текущую итерацию, и все последующие
				//break; прервет только j-й for, на i-й for, оно никак не действует
			}
		}
		if(simple)cout << i << "\t";
	}
#endif PROST_CHISLA
}