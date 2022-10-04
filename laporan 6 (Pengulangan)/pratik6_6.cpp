#include <iostream>
using namespace std;

int main (){
	int angka = 0;
	cobaLagi:
		cout << "Masukkan Angka : "; cin >> angka;
		if (angka!=5) {
			goto cobaLagi;
		}
	return 0;
}
