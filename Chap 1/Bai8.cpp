/*Viết chương trình nhập và xuất danh sách trên 10 sinh viên,
thông tin gồm (Mã số, tên, tuổi, quê quán, xếp loại) định dạng xuất
ra danh sách theo thứ tự dạng bảng biểu.*/
#include <iostream>
using namespace std;

struct SinhVien{
	string maso;
	string ten;
	int tuoi;
	string quequan;
	string xeploai;
};

void nhapSinhVien(SinhVien &sv);
void xuatSinhVien(SinhVien sv[], int n);

int main (){
	cout << "Nhap so luong sinh vien: ";
	int n; cin >> n;
	SinhVien sv[n];
	cin.ignore();
	for (int i = 0; i < n; i++){
		cout <<"=================================\n"; 
		cout << "Sinh vien thu " << i+1 << ": \n";
		nhapSinhVien(sv[i]);
	}

	xuatSinhVien(sv, n);
	return 0;
}

void nhapSinhVien(SinhVien &sv){ //Cần truyền tham chiếu!!!!
	cout << "Nhap ma so: "; getline(cin, sv.maso);
	cout << "Nhap ten: "; getline (cin, sv.ten);
	cout << "Nhap tuoi: "; cin >> sv.tuoi;
	cin.ignore();
	cout << "Nhap que quan: "; getline (cin, sv.quequan);
	cout << "Nhap xep loai: "; getline (cin, sv.xeploai);
}

void xuatSinhVien(SinhVien sv[], int n){
	cout << "STT\tMa so\tTen\t\tTuoi\tQue quan\t\tXeploai\n";
	cout << "==========================================================\n";
	for (int i = 0; i < n; i++){
		cout << i+1 << '\t'
	<< sv[i].maso << '\t'
	<< sv[i].ten << "\t"
	<< sv[i].tuoi << '\t'
	<< sv[i].quequan << '\t'
	<< sv[i].xeploai << '\t' << endl;
	}
}
