#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Nhap so nguyen duong n cho S(n) = 1 + 1/3 + 1/5 +...+ 1/(2n+1)" << "\n";
	cout << "n = "; cin >> n;
	
	if (n<0)
	{
		cout << "n khong hop le!";
		return 0;
	}
	else if (n==0) //S(n) có thể xét n=0, lập điều kiện riêng
	{
		cout << "Tong S(n) = 1";
		return 0;
	}
	
	else
	{
		double s = 0;
		for (int i=1; i<=n; i+=2)
		{
			s = s + 1.0/i;
		}
		cout << "Tong S(n) = " << s;
	}
	return 0;
}