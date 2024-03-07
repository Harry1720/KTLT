/*viết chương trình
📫 Đếm xem có bao nhiêu ký tự nhập vào.
📫 Đếm có bao nhiêu từ trong đoạn trên.*/
#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;

int main(){
	string s;
	cout << "Nhap chuoi: "; getline (cin, s);
	cout << "So ky tu da nhap: " << s.length();
	stringstream ss(s);//28tech tham khảo
	string word;
	int count = 0;
	while (ss>>word){ 
		count++;
	}
	cout << "\nSo tu da nhap: " << count;
	return 0;
}