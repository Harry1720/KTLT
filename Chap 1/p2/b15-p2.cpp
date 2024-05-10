#include <iostream>
using namespace std;

int main()
{
	int n, mau = 0;
	double s = 0;
	cout << "Nhap so nguyen duong n cho bieu thuc S(n) = 1 + 1/(1+2) + 1/(1+2+3) + ... + 1/(1+2+3+...+n)"<< "\n";
	cout << "n = "; cin >> n;
	
	if (n <= 0)
	{cout << "n khong hop le";}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			mau = mau + i;
			s = s + 1.0/mau;
		}
		cout << "Tong S(n) = " << s;
	}
	return 0;
}