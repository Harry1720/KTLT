/*Dùng cấu trúc switch viết chương trình nhập vào ngày của
tháng hiện tại, xuất ra thứ tương ứng với ngày đó.*/

/*Thứ trong tuần được tính theo công thức Zeller:
DayOfWeek = (d+y+y/4-y/100+y/400+(31*m)/12)%7. 

Trong đó:
a = (14 – month)/12
y = year – a
m = month + 12*a -2
DayOfWeek: 0 (Chủ nhật), 1 (Thứ hai), 2 (Thứ ba), …

Năm nhuận (Leap Year) tính theo lịch Gregorian (từ năm 1582): 
năm phải chia hết cho 4 và không chia hết cho 100, hoặc năm phải chia hết cho 400.
*/
#include <iostream>
using namespace std;

int main (){
    int d, month, year, m, y, a, DayMax, DayOfWeek;
    cout << "Nhap ngay: "; cin >> d;
    cout << "Nhap thang: "; cin >> month;
    cout << "Nhap nam: "; cin >> year;

    if (year < 1582){
        cout << "Nam khong hop le.";
        goto END;
    }

    if (month < 0 || month > 12){
        cout << "Thang khong hop le.";
        goto END;
    }

    switch (month){
        case 4: case 6: case 9: case 11:{
            DayMax = 30;
            break;
        }
        case 2:{ //Năm nhuận
            DayMax = 28 + ((year%4 == 0 && year%100 != 0) || year%400 == 0);
            break;
        }
        default: DayMax = 31;
    }

    if(d > DayMax){
        cout << "Ngay khong hop le.";
        goto END;
    }

    a = (14 - month)/12;
    y = year - a;
    m = month + 12*a -2;

    DayOfWeek = (d + y + y/4 - y/100 + y/400 + (31*m)/12) % 7;

    if(DayOfWeek == 0){
        cout << "Chu Nhat.";
    }
    else{
        cout << "Thu " << DayOfWeek+1 << ".";
    }

END:
    return 0;        
}