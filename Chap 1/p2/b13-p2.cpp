//viet chuong trinh tinh S(n) = x^2 + x^4 + ... + x^2n.
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	int n;
	double x, s=0;
	cout << "Nhap so nguyen duong n, x tuy y cho bieu thuc S(n) = x^2 + x^4 + ... + x^2n."<< "\n";
	cout << "x = "; cin >> x;
	cout << "n = "; cin >> n;
	
	if (n <=0)
	{ cout << "n khong hop le!";}
	else
    {
        for (int i=1; (2*i) <= (2*n); i++)
        {
            s += pow(x, 2*i);
        }
        cout << "Tong S(n) = " << s;
    }
        return 0;
}