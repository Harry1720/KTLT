#include <iostream>
using namespace std;

int main ()
{
	int n, s = 0, t = 1;
	cout << "Nhap so nguyen duong n cho bieu thuc S(n) = 1 + 1x2 + 1x2x3 + ... + 1 x 2 x 3 x ... x n" << "\n";
	cout << "n = "; cin >> n;
	
	if (n<=0)
	{cout << "n khong hop le!";}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			t = t*i; //lấy kết quả tích trước nhân tiếp với số tiếp theo.
			s = s+t; //tính tổng sau khi tính tích
		}
		cout << "Tong S(n) = " << s;
	}
	return 0;
}