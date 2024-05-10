//Tính tích tất cả ước số của số nguyên dương n
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n, t1 = 1, t2 = 1;
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
					t1 = t1*i;
				}
				else
				{
					cout << i << " " << n/i << " ";
					t2 = t2 * i * (n/i);
				}
			}
		}
	}
	cout <<"\n"<< "Tich cac uoc so cua so nguyen duong n la: " << t1*t2;
	return 0;
}