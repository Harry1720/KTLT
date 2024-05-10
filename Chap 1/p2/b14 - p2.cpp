// Tinh tong S(n) = x+ x^3 + x^5 + ... + x^2n+1
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float s = 0;
	float x, n;
	cout << "Nhap x cho phuong trinh tinh tong: S(n) = x+ x^3 + x^5 + ... + x^2n+1: " << "\n";
	cout << "x = "; cin >> x;
	cout << "Nhap n cho he so mu 2n+1 cua phuong trinh S(n) tren: " << "\n";
	cout << "n = "; cin >> n;
	
	if (n<=0)
	{
		cout << "n khong hop le!";
	}
	
	else
	{
		for (int i = 1; i <= 2*n+1; i +=2)
	{
		s = s + pow (x,i);
	}
	cout << "Tong S(n) = " << s;
	}
	
	return 0;
 } 