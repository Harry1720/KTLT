//viết chương trình tính giá trị trung bình của 3 số bất kỳ. Kết quả làm tròn đến 4 chữ số thập phân.
#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	float a,b,c;
	cout << "Nhap a, b, c: "; cin >> a >> b >> c;
	float avg = (a+b+c)/3;
	cout << "Gia tri trung binh cua " << a << ", " << b << ", " << c << " la: " 
		<< setprecision (4) << fixed << avg;
	return 0;
} 