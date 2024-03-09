/*Dùng cấu trúc switch viết chương trình nhập vào một số từ
0 đến 9. Xuất ra phiên âm của số đó (VD: Nhập 6 – xuất ra sáu).*/
#include <iostream>
using namespace std;

int main(){
    int n;
    do{
        cout << "Nhap mot so tu 0 den 9: ";
        cin >> n;
    }
    while (n<0 || n>9);
    switch (n){
        case 0: cout << "Khong."; break;
        case 1: cout << "Mot."; break;
        case 2: cout << "Hai."; break;
        case 3: cout << "Ba."; break;
        case 4: cout << "Bon."; break;
        case 5: cout << "Nam."; break;
        case 6: cout << "Sau."; break;
        case 7: cout << "Bay."; break;
        case 8: cout << "Tam."; break;
        default: cout << "Chin."; break;
    }
    return 0;
}