#include <iostream>
using namespace std;

int main() {
	int Fahren, Celcius, nilai;
	char Ulang;
	
	do {
	cout<<"1. Fahrenheit ke Celcius"<<endl;
	cout<<"2. Celcius ke Fahrenheit"<<endl;
	cout<<"Pilih Aplikasi yang anda butuhkan: "; cin>>nilai;
	
	switch(nilai){
		case 1 : cout<<"Masukkan Nilai Fahrenheit: "; cin>>Fahren;
		Celcius = (Fahren-32)*5/9; 
		cout<<"Suhu celcius adalah "<<Celcius; break; 
		case 2 : cout<<"Masukkan Nilai Celcius: "; cin>>Celcius;
		Fahren = Celcius*9/5 + 32; 
		cout<<"Suhu Fahrenheit adalah "<<Fahren; break;
		default : cout<<"Program tidak ditemukan, silahkan ulang kembali!!!"; break;
		}
	cout<<endl<<"Apakah ingin mengulangi program (Y/T): "; cin>>Ulang;
	system("cls");
	}
		
		while ( Ulang == 'Y' || Ulang == 'y' );
		
}
