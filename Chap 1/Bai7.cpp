//Viết chương trình C++ để vẽ tam giác
#include <iostream>
using namespace std;

int main (){
	for (int i = 1; i <= 9; i = i+2){
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	for (int i = 9; i >= 1; i = i-2){
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}