	#include <iostream>
	using namespace std;
	
	int main()
	{
		int N = 1000;
		bool check[N + 1];
		// khoi tao cac so tu 2 den n deu la so nguyen to
		for (int i = 2; i <= N ; i++)
		{
			check[i] = true;
		}
		// thuat toan sang nguyen to 
		// neu mot so la so nguyen to thi tat ca cac boi cua no khong phai la so nguyen to 
		for (int i = 2 ; i <= N ; i++)
		{
			if (check[i])
			{
				for (int j = 2 * i ; j <= N ; j+=i)
				{
					check [j] = false;
				}
			}
		}
		// in ra cac so la so nguyen to 
		for (int i = 2; i <= N ; i++)
		{
			if (check[i]) 
				cout << i << " ";
		}
	}
