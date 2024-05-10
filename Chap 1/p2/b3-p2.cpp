#include <iostream>
using namespace std;

int main()
{
	int n;
	double s = 0;
	cout << "Nhap so nguyen duong n cho bieu thuc S(n) = 1 + 1/2 + 1/3 + ... + 1/n " << "\n";
	cout << "n = "; cin >> n;
	
	if (n<=0)
	{
		cout << "n khong hop le!";
	}
	
	else
	{
		for (int i=1;  i<=n ; i++)
	{
		s = s + 1.0 / i; //để 1.0 -> số chấm động, biểu thức sẽ tính 1/n đúng
	}
	
	cout << "Tong S(n) = " << s;
	}
	
	
	return 0;
}