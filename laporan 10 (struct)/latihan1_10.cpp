#include <iostream>
using namespace std;

struct mahasiswa{
	char nim[9];
	char nama[25];
	char mataKuliah[25];
	int nilaiAngka;
	string nilaiHuruf;
};

int main(){
	mahasiswa Mhs[3];
	int i;
	
	for (i=0; i<3; i++){
		cout<<"Nim : "; cin>>Mhs[i].nim;
		cout<<"Nama : "; cin>>Mhs[i].nama;
		cout<<"Mata Kuliah : "; cin>>Mhs[i].mataKuliah;
		cout<<"Nilai : "; cin>>Mhs[i].nilaiAngka;
		cout<<endl;	
		
		if (Mhs[i].nilaiAngka <= 45.9) {Mhs[i].nilaiHuruf = "E";
		} else 
		if (Mhs[i].nilaiAngka <= 55.9) {Mhs[i].nilaiHuruf = "D";
		} else 
		if (Mhs[i].nilaiAngka <= 62.9) {Mhs[i].nilaiHuruf = "C";
		} else 
		if (Mhs[i].nilaiAngka <= 70.9) {Mhs[i].nilaiHuruf = "BC";
		} else 
		if (Mhs[i].nilaiAngka <= 77.9) {Mhs[i].nilaiHuruf = "B";
		} else 
		if (Mhs[i].nilaiAngka <= 85.9) {Mhs[i].nilaiHuruf = "AB";
		} else 
		if (Mhs[i].nilaiAngka <= 100) {Mhs[i].nilaiHuruf = "A";
		} else {Mhs[i].nilaiHuruf = "silahkan ulang dan masukkan nilai dengan index 1-100";
		};
	}
	

	for (i=0; i<3; i++){
		cout<<"\n\nNim : "<<Mhs[i].nim;
		cout<<"\nNama : "<<Mhs[i].nama;
		cout<<"\nMata Kuliah : "<<Mhs[i].mataKuliah;
		cout<<"\nNilai : "<<Mhs[i].nilaiAngka;
		cout<<"\nIndeks Nilai : "<<Mhs[i].nilaiHuruf;
	}
}
