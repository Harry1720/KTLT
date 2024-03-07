//Viết chương trình tính phương trình bậc 2
#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int a, b, c;
	cout << "==== Giai phuong trinh bac 2 ax^2 + bx + c = 0 ====\n";
	cout << "Nhap he so a, b, c: ";
	cin >> a >> b >> c;
	if(a == 0){
		if (b == 0){
			if (c == 0) cout << "Phuong trinh vo so nghiem.";
			else cout << "Phuong trinh vo nghiem.";
		}
		else cout << "Phuong trinh co nghiem x = " << -c/b;
	}
	else
	{
		float delta = b*b - 4*a*c;
		if(delta > 0){
			cout << "Phuong trinh co 2 nghiem: \n" << "x1 = " << (-b + sqrt(delta))/(2*a)
			<< "\nx2 = " << (-b - sqrt(delta))/(2*a);
		}
		else if(delta == 0){
			cout << "Phuong trinh co nghiem kep: x = " << -b/(2*a);
		}
		else cout << "Phuong trinh vo nghiem.";
	}
	return 0;
} 