#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n "; cin >> n;
	int a = 0, b = 1, fibo;
	for (int i = 1 ; i <= n ; i++)
	{
		fibo = a+b;
		b = a;
		a = fibo;
	}
	cout << "so fibonacci thu " << n << " bang " << fibo << endl;
}
