#include <iostream>
using namespace std;

int main ()
{
	int n;
	double s = 0;
	cout << "Nhap so nguyen duong n cho S(n) = 1/2 + 2/3 + 3/4 +...+ n/(n+1)" << "\n";
	cout << "n = "; cin >> n;
	
	if (n<=0)
	{
		cout << "n khong hop le!";
	}
	
	else
	{
		for (double i=1.0; i<=n; i++)
		{
			s = s + i/(i+1);
		}
	cout << "Tong S(n) = " << s;
	}
	return 0;
}