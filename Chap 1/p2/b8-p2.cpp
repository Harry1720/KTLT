#include <iostream>
using namespace std;

int main ()
{
	int n;
	double s = 0;
	cout << "Nhap so nguyen duong n cho S(n) = 1/2 + 3/4 + 5/6 +...+ (2n+1)/(2n+2)" << "\n";
	cout << "n = "; cin >> n;
	
	if (n<0)
	{
		cout << "n khong hop le!";
	}
	
	else
	{
		for (double i=1.0; i<=(2*n+1); i+=2) //i đang xét điều kiện của tử số.
		{
			s = s + (i)/(i+1);
		}
	cout << "Tong S(n) = " << s;
	}
	return 0;
}