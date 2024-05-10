//Tính số lượng ước số của số nguyên dương n
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n, count1 = 0, count2 = 0;
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
					count1 += 1;
				}
				else
				{
					cout << i << " " << n/i << " ";
					count2 += 2;
				}
			}
		}
	}
	cout <<"\n"<< "So luong uoc so cua so nguyen duong n la: " << count1+count2;
	return 0;
}