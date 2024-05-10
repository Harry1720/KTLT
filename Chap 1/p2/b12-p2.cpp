#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	double x, s = 0;
	int n;
	cout << "Nhap he so x, n cho bieu thuc: S(n) = x + x^2 + x^3 +...+ x^n" << "\n";
	cout << "Nhap x: x = "; cin >> x;
	cout << "Nhap n: n = "; cin >> n;
	
	if (n<=0)
	{
		cout << "n khong hop le!";
	}
	for (int i = 1; i <= n; i++)
	{
		s += pow (x, i);
	}
	cout << "Tong S(n) = " << s;
	
	return 0;
}