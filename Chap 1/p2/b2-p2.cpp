#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	int n, s = 0;
	cout << "Nhap so nguyen duong n cho bieu thuc S(n) = 1^2 + 2^2 +...+ n^2." << "\n";
	cout << "n = "; cin >> n;
	
	if (n<=0)
	{
		cout << "n khong hop le!";
	}
	
	for (int i=1; i<=n; i++)
	{
		s += pow (i, 2);	
	}
	cout << "Tong S(n) = " << s;
	
	return 0;
}