#include<iostream>
using namespace std;
//#define KVADRAT
//#define ONE
//#define TWO
//#define TREE
//#define FOUR
//#define ROMB
//#define SIX
#define SHAHMATNAYA_DOSCA

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;

#ifdef KVADRAT
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
			cout << "* ";
		cout << endl;
	}
#endif KVADRAT

#ifdef ONE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << "* ";
		cout << endl;
	}
#endif ONE

#ifdef TWO
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
			cout << "* ";
		cout << endl;
	}
#endif TWO

#ifdef TREE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";
			for (int j = i; j < n; j++) cout << "* ";
			cout << endl;
	}
	
#endif TREE

#ifdef FOUR
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << "  ";
		for (int j = 0; j <= i; j++) cout << "* ";
		cout << endl;
	}
#endif FOUR

#ifdef ROMB
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/"; 
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++) cout << "  "; cout << "/";
		cout << endl;
	}
#endif ROMB

#ifdef SIX
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if ((i + j) % 2 == 0)cout << "+ ";
				else cout << "- ";
			}
			cout << endl;
		}
#endif SIX

#ifdef SHAHMATNAYA_DOSCA
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++) cout << "* ";
			for (int j = 0; j < n; j++)cout << "  ";
			for (int j = 0; j < n; j++) cout << "* ";
			for (int j = 0; j < n; j++)cout << "  ";
			for (int j = 0; j < n; j++) cout << "* ";
				cout << endl;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)cout << "  ";
			for (int j = 0; j < n; j++) cout << "* ";
			for (int j = 0; j < n; j++)cout << "  ";
			for (int j = 0; j < n; j++) cout << "* ";
				cout << endl;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++) cout << "* ";
			for (int j = 0; j < n; j++)cout << "  ";
			for (int j = 0; j < n; j++) cout << "* ";
			for (int j = 0; j < n; j++)cout << "  ";
			for (int j = 0; j < n; j++) cout << "* ";
			cout << endl;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)cout << "  ";
			for (int j = 0; j < n; j++) cout << "* ";
			for (int j = 0; j < n; j++)cout << "  ";
			for (int j = 0; j < n; j++) cout << "* ";
			cout << endl;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++) cout << "* ";
			for (int j = 0; j < n; j++)cout << "  ";
			for (int j = 0; j < n; j++) cout << "* ";
			for (int j = 0; j < n; j++)cout << "  ";
			for (int j = 0; j < n; j++) cout << "* ";
			cout << endl;
		}
#endif SHAHMATNAYA_DOSCA
}