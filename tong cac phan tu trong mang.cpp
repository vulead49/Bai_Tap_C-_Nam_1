#include <iostream>
#include <math.h>
using namespace std;
bool prime(int n)
{
	if (n<2) return false;
	for (int i = 2; i<= sqrt(n); i++)
	if (n%i == 0) return false;
	return true;
}
int main()
{
	int n; 
	cout << "nhap so phan tu cua mang ";
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cout << "phan tu thu " << i + 1 << " la "; cin >> a[i];
	}
	int tong = 0;
	int max = a[0];
	for (int i = 0; i < n ; i++)
	{
		tong += a[i];
		if (a[i]>max) max = a[i];
	}
	cout << "tong la " << tong << endl;
	cout << "gia tri lon nhat trong mang la " << max << endl;
	// tim gia tri lon nhat trong mang
	int dem = 0;
	for (int i = 0; i<n ; i++)
	if (prime(a[i])) dem++;
	cout << "co " << dem << " so nguyen to ";
}


















