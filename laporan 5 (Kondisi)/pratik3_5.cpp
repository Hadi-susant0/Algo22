#include <iostream>
using namespace std;

int main(){
	int pil,d,e,p; float a,b,c; 
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<"============================"<<endl;

	cout<<"Masukkan pilihan anda (1-5): "; cin>>pil;
	switch (pil){
		case 1: cout<<"Masukkan angka pertama: "; cin>>a;
				cout<<"Masukkan angka kedua: "; cin>>b;
				c = a + b;
				cout<<"Hasil Penjumlahan: "<<c<<endl;
		break;
		case 2: cout<<"Masukkan angka pertama: "; cin>>a;
				cout<<"Masukkan angka kedua: "; cin>>b;
				c = a - b;
				cout<<"Hasil Pengurangan: "<<c<<endl;
		break;
		case 3: cout<<"Masukkan angka pertama: "; cin>>a;
				cout<<"Masukkan angka kedua: "; cin>>b;
				c = a * b;
				cout<<"Hasil Perkalian: "<<c<<endl;
		break;
		case 4: cout<<"Masukkan angka pertama: "; cin>>a;
				cout<<"Masukkan angka kedua: "; cin>>b;
				c = a / b;
				cout<<"Hasil Pembagian: "<<c<<endl;
		break;
		case 5: cout<<"Masukkan angka pertama: "; cin>>p;
				cout<<"Masukkan angka kedua: "; cin>>d;
				e = p % d;
				cout<<"Hasil Modulus: "<<e<<endl;
		break;
		default: cout<<"masih dalam tahap pengembangan, pilih antara 1 sampai 5"<<endl;
	}
}







































