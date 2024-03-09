//Tìm giá trị lớn nhất trong 4 số a, b, c, d ?
/*Nếu a > b => a max, ngược lại b
Nếu max > c -> giữ nguyên, ngược lại c max
Tương tự, max > d -> giữ nguyên, ngược lại d max*/
#include <iostream>
using namespace std;

int main (){
    int a, b, c, d;
    cout << "Nhap a, b, c, d: ";
    cin >> a >> b >> c >> d;

    int max = a;
    if(max < b) max = b;
    if(max < c) max = c;
    if(max < d) max = d;
    
    cout << "So lon nhat la: " << max;
    return 0;
}