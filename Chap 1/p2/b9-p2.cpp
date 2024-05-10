#include <iostream>
using namespace std;

int main()
{
	int n, t = 1;
	cout << "Nhap so nguyen duong n cho bieu thuc T(n) = 1 x 2 x 3 x ... x n" << "\n";
	cout << "n = "; cin >> n;
	
	if (n<=0)
	{cout << "n khong hop le!";}
	else
	{
		for (int i = 1; i <=n; i++)
		{
			t = t*i;
		}
		cout << "Tich T(n) = " << t;
	}
	return 0;
} 
// Bài này có thể sử dụng cho tính giai thừa của 1 số.