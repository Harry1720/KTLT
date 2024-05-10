//Viết chương trình tính tổng sau với n dấu căn
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int n;
    float S = 0;
    do{
       cout << "Nhap n dau can (n > 0): "; cin >> n;
    } while (n < 1);

    for (int i = 1; i <= n; i++){
        S = sqrt(3+S);
    }
    cout << "S = " << setprecision(4) << fixed << S;
    return 0;
}