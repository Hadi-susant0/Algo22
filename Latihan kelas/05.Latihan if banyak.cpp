#include <iostream>
using namespace std;

int main() {
	int Nilai;
	string Nama;
	
	cout<<"Input Nama Anda: "; getline(cin,Nama);
	cout<<"Input Nilai Kegantengan (1-100): "; cin>>Nilai;

	if(Nilai<1){
	cout<<"Anda Alien";
	}else if(Nilai<85) {
		cout<<"Maaf, "<<Nama<<" anda Perlu oplas";	
	}else if (Nilai>85){
		cout<<Nama<<" anda Ganteng";
	}else if(Nilai>100)
	{cout<<"Anda bukan Manusia";
	}
}
