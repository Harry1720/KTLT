#include <iostream>
using namespace std;
int main (){
    cout <<"Nhap mot ky tu: ";
    char a; cin >> a;
    if(a >= 'a' && a <= 'z'){
        cout << "Ky tu nhap vao la ky tu chu thuong.";
    }
    else if (a >= 'A' && a <= 'Z'){
        cout << "Ky tu nhap vao la ky tu chu hoa.";
    }
    else cout << "Khong phai la ky tu chu.";
    return 0;
}