/*viết chương trình nhập vào tên, giới tính và
tuổi của một người. Xuất ra màn hình tên, giới tính và năm sinh
của người đó*/
#include <iostream>
using namespace std;
int main (){
	cout << "Nhap ten: ";
	string ten; getline (cin, ten);
	cout << "Nhap gioi tinh: ";
	string gioitinh; getline (cin, gioitinh);
	cout << "Tuoi: ";
	int tuoi; cin >> tuoi;

	cout << "Ten: \t\t" << ten << endl;
	cout << "Tuoi: \t\t" << tuoi << endl;
	cout << "Gioi tinh: \t" << gioitinh << endl;

	return 0;
} 