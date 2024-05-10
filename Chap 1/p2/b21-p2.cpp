//Tính tổng tất cả ước số của số nguyên dương n
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n, s1 = 0, s2 = 0;
	cout << "Nhap so nguyen duong n: "; cin >> n;
	if (n<0)
	{cout << "n khong hop le!";}
	else
	{
		cout << "Cac uoc so cua so nguyen duong n la: ";
		for (int i = 1; i<=sqrt(n); i++)
		{
			if(n%i==0)
			{
				if (n/i==i)
				{
					cout << i << " ";
					s1 += i;
				}
				else
				{
					cout << i << " " << n/i << " ";
					s2 = s2 + i + n/i;
				}
			}
		}
	}
	cout <<"\n"<< "Tong cac uoc so cua so nguyen duong n la: " << s1 + s2;
	return 0;
}