#include <iostream>
using namespace std;

int main ()
{
	int n, s = 0;
	cout << "Nhap so nguyen duong n cho bieu thuc tinh tong: S(n) = 1+2+3+...+n: "<< "\n" << "n = ";
	cin >> n;
	
	if (n<=0)
	{
		cout << "n khong hop le!";
	}
	
	else
	{
		for (int i=1; i<=n; i++)
	{
		s += i;
	}
	
	cout << "Tong S(n) = " << s;
	}
	
	return 0;
}