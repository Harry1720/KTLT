//Nhập số tự nhiên N, xuất N dưới dạng số nhị phân ?
#include <iostream>
#include <vector>
using namespace std;

int main (){
    int N;
    vector<int>nghiem;
    do{
        cout << "Nhập N > 0: "; cin >> N;
    } while (N < 0);

    while(N != 0){
        nghiem.push_back(N%2);
        N /= 2;
    }
    for (int i = nghiem.size()-1; i >= 0; i--)
        cout << nghiem[i];
    return 0;
}