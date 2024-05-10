#include <iostream>
using namespace std;

int main ()
{
	int n;
	double s = 0;
	cout << "Nhap so nguyen duong n cho bieu thuc S(n) = 1/2 + 1/4 + ... + 1/2n. " << "\n" << "n = ";
	cin >> n;
	
	if (n < 2)
	{
		cout << "n khong hop le!";
	}
	
	else
	{
		for (int i = 2; i <= n; i=i+2)
		{
			s = s + 1.0/i;
		}
	cout << "Tong S(n) = " << s;
	}
	return 0;
}