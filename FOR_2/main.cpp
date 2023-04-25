#include<iostream>
using namespace std;
using std::cout;

//#define FACTORIAL
//#define OSNOVANIE_POKAZATEL
//#define ASCLL
void main()
{
	setlocale(LC_ALL, "Russsian");
#ifdef FACTORIAL
int number;
cout << "¬ведите число: "; cin >> number;
int factorial = 1;
for (
	int i = 1;
	i <= number;
	i++)
{
	cout << i << "! = ";
	factorial *= i;
	cout << factorial << ";\n";
}
cout << endl;
#endif FACTOTIAL

#ifdef OSNOVANIE_POKAZATEL
double a;   //основание
int n;   //показатель
double N = 1;
cout << "¬ведите основание степени: "; cin >> a;
cout << "¬ведите показатель степени: "; cin >> n;
if (n < 0)
{
	a = 1 / a;
	n = -n;
}
for (int i = 0; i < n; i++)
{
	N *= a;
}
cout << N << endl;
#endif OSNOVANIE_POKAZATEL

#ifdef ASCLL
for (int i = 0; i < 256; i++)
{
	if (i % 16 == 0) cout << endl;
	cout << (char)i << " ";
}
#endif ASCLL

}

