#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, mau = 0;
	double x, s = 0;
	cout << "Nhap x cho bieu thuc S(n) = x + x^2/(1+2) + x^3/(1+2+3) + ... + x^n/(1+2+3+...+n)." << "\n";
	cout << "x = "; cin >> x;
	cout << "Nhap so nguyen duong n cho bieu thuc S(n) tren: n = "; cin >> n;
	
	if (n <= 0)
	{cout << "n khong hop le!";}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			mau = mau + i;
			s = s + (double((pow(x,i))/mau));
		}
		cout << "Tong S(n) = " << s;
	}
	return 0;
}