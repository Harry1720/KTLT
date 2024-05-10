// Tinh tong S(n) = 1 + x^2/2! + x^4/4! + ... + x^2n/(2n)!.
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	double x, s = 0;
	int n, mau = 1;
	cout << "Nhap x cho phuong trinh tinh tong: S(n) = x + x^2/2! + x^3/3! + ... + x^n/n!: ";
	cout << "x = "; cin >> x;
	cout << "Nhap so n nguyen duong cua phuong trinh S(n) tren: ";
	cout << "n = "; cin >> n;
	
	if (n<0)
	{cout << "n khong hop le!"; return 0;}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			mau = mau*i;
			s = s + (double((pow (x,i))/mau));
		}
	cout << "Tong S(n) = " << s;
	}
	return 0;
 } 