#include <iostream>
#include <math.h>
using namespace std;

void xuat(int n)
{
	cout << "cac so tu 1 toi n la ";
	for (int i = 1 ; i <= n ; i ++)
	{
		cout << i << " " ;
	}
	cout << endl;
}
void sum (int n)
{
	int tong = 0;
	for (int i = 1 ; i <= n ; i++)
	{
		tong += i ;
	}
	cout << "tong cac so tu 1 toi n la " << tong << endl;
}

bool prime(int n)
{
	if (n<2) return false;
	for (int i = 2; i<= sqrt(n); i++)
	if (n%i == 0) return false;
	return true;
}

void incacsonguyento (int n)
{
	cout << "cac so nguyen to tu 1 toi n la ";
	for (int i = 0 ; i< n ; i++)
	{
		if (prime(i)) cout << i << " ";
	}
	cout << endl;
}

void incacsonguyentodautien (int n)
{
	int count = 0 ; 
	int i = 2;
	while (count < n );
	{
		if (prime(i))
		{
			cout << i << " ";
			count ++;
		}
		i++;
	}
	cout << endl;
}

int main()
{
	int n;
	cout << "nhap n " ; cin >> n ;
	xuat(n);
	sum(n);
	if(prime(n))
	{
		cout << "n la so nguyen to";
	}
	else
	{
		cout << "n khong phai la so nguyen to ";
	}
	cout << endl;
	incacsonguyento(n);
	incacsonguyentodautien(n);
	
}









