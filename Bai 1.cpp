//Viết chương trình tính khoảng cách từ điểm A(x, y, z) tới mặt phẳng: ax + by + cz +d = 0
// Kết quả làm tròn đến 3 chữ số thập phân

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main (){
    int x, y, z;
    cout << "Nhap toa do diem A(x, y, z): ";
    cin >> x >> y >> z;
    cout << "Nhap a, b, c, d cho pt ax + by + cz + d = 0: ";
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    float kc = (abs(a*x + b*y + c*z + d))/ (sqrt(a*a + b*b + c*c));
    cout << "Khoang cach tu A den mp: " << setprecision (3) << fixed << kc;
    return 0;
}