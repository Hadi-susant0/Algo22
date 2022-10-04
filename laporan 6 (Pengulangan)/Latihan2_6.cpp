#include <iostream>
using namespace std;

int main(){
	char jawab;
	float angka1, angka2, Hasil;
	
	do{
		cout << "Masukkan Angka Pertama : "; cin >> angka1;
		cout << "Masukkan Angka Kedua: "; cin >> angka2;
		Hasil = angka1 + angka2;
		cout << "Angka Pertama + Angka Kedua adalah "<<Hasil<<endl; 
		cout << "Apakah ingin coba lagi (Y/T) ? "; cin >> jawab;
		system ("cls");
	}
	while (jawab == 'y' || jawab == 'Y');
	
	
	return 0;
}


