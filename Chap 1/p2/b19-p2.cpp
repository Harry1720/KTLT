// Tinh tong S(n) = 1 + x^2/2! + x^4/4! + ... + x^2n/(2n)!.
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	double x, s = 1;
	int n, mau = 1;
	cout << "Nhap x cho phuong trinh tinh tong: S(n) = 1 + x + x^3/3! + x^5/5! + ... + x^(2n+1)/(2n+1)!: ";
	cout << "x = "; cin >> x;
	cout << "Nhap so n nguyen duong cua phuong trinh S(n) tren: ";
	cout << "n = "; cin >> n;
	
	if (n<0)
	{cout << "n khong hop le!"; return 0;}
	else
	{
		s = s + x; // n = 0
		for (int i = 2; i <= (2*n+1); i +=2)
		{
			mau = mau*i*(i+1);
			s = s + (double((pow(x,(i+1)))/mau));
		}
	cout << "Tong S(n) = " << s;
	}
	return 0;
 } 