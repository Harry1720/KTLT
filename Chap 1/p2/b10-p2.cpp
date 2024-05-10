#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double x, n;
	cout << "Nhap he so x, n cho phuong trinh: T(x,n) = x^n."<<"\n";
	cout << "x = "; cin >> x;
	cout << "n = "; cin >> n;
	
	cout << "Phuong trinh T(x,n) = " << pow (x, n);
	return 0;
}