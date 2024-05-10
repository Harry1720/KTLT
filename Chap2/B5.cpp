//Viết chương trình tính tổng
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int n, S1;
    float S;

    do {
        cout << "Nhap n > 0: "; cin >> n;
    } while (n < 1);

    for (int i = 1; i <=n; i++){
        S1 += pow(i,2);
    }

    S = sqrt(S1);
    cout << "S = " << setprecision(4) << fixed << S;

    return 0;    
}