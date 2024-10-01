#include <iostream>
using namespace std;
int UCLN(int a, int b)
{
	for (int i = min(a,b); i>0; i--)
	{
		if (a%i == 0 && b%i == 0)
		return i;
	}
}
int main()
{
	int a,b;
	cout << "nhap a "; cin >> a;
	cout << "nhap b "; cin >> b;
	cout << "uoc chung lon nhat cua a va b la "<< UCLN (a,b)<< endl;
	cout << "boi chung nho nhat cua a va b la "<< a*b/UCLN(a,b)<< endl;
}
