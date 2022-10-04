#include <iostream>
using namespace std;

int main(){
	int nilai = 1;
	while (nilai%2 != 0){
		cout << "Masukkan bilangan genap ";
		cin >> nilai;
	}
	cout << "Angka " << nilai << " termasuk bilangan genap";
	
	return 0;
}
