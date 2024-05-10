#include <iostream>
using namespace std;

int main ()
{
	int n;
	double s = 0;
	cout << "Nhap so nguyen duong n cho S(n) = 1/(1x2) + 1/(2x3) +...+ 1/n(n+1)" << "\n";
	cout << "n = "; cin >> n;
	
	if (n<=0)
	{
		cout << "n khong hop le!";
	}
	
	else
	{
		for (int i=1; i<=n; i++)
		{
			s = s + 1.0/(i*(i+1));
		}
	cout << "Tong S(n) = " << s;
	}
	return 0;
}