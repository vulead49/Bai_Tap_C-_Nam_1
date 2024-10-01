// ham tim uoc chung lon nhat 
#include <iostream>
using namespace std;

int T(int a, int b);
int main()
{
	cout << T(126,183);
	return 0;
}
int T(int a , int b)
{
	if (a % b == 0)
		return b;
	return (b , a % b);
}
//183 chia 126 du 57
//126 chia 57 du 12
//57 chia 12 du 9
//12 chia 9 du 3
//9 chia 3 du 0
