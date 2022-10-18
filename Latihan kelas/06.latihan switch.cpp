#include <iostream>
using namespace std;

int main() {
	int Nilai;
	string Nama;
	
	cout<<"Input Nama Anda: "; getline(cin,Nama);
	cout<<"Input Nilai Kegantengan (1-100): "; cin>>Nilai;

	switch (Nilai){
		case 1 ... 85 : cout<<"Maaf, "<<Nama<<" anda Perlu oplas"; break;
		case 86 ... 100 : cout<<Nama<<" anda Ganteng"; break;
		default : cout<<"Anda bukan Manusia";
	}
}
