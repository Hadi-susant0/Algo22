#include<iostream>
#include<fstream>
using namespace std;

struct dataPelanggan{
	string noKTP;
	string nama;
	int rekening;
	int pin;
};

void menu(){
	dataPelanggan p;

	fstream MyFile;
	MyFile.open("dataPelanggan.txt");

	cout<<"No KTP \t "; cin>>p.noKTP;
	cout<<"Nama \t "; cin>>p.nama;
	cout<<"No Rekening \t "; cin>>p.rekening;
	cout<<"Pin (6 angka) \t "; cin>>p.pin;

	MyFile << p.noKTP<<endl;
	MyFile << p.nama<<endl;
	MyFile << p.rekening<<endl;
	MyFile << p.pin<<endl<<endl;

	MyFile.close();
}

void utama(){
	int norek;
	int pin;
	dataPelanggan p;

	cout<<"Masukkan No.Rekening \t"; cin>>norek;
	cout<<"Masukkan No Pin \t"; cin>>pin;

	ifstream MyReadFile("dataPelanggan.txt");

//	cout<<norek<<endl;

	MyReadFile>>p.noKTP;
	MyReadFile>>p.nama;
	MyReadFile>>p.rekening;
	MyReadFile>>p.pin;
	
	while(!MyReadFile.eof()){

//	cout<<p.rekening<<endl;
//	cout<<norek<<endl;
//	cout<<p.pin<<endl;
//	cout<<pin<<endl;
	
	if( pin == p.pin && norek == p.rekening){
			cout<<"Benar";
    	} else {
  	    	cout<<"Salah";
    	}
    	
    MyReadFile>>p.noKTP;
	MyReadFile>>p.nama;
	MyReadFile>>p.rekening;
	MyReadFile>>p.pin;
	}
}

int main(){
int pil;

cout<<"1.Buat ATM"<<endl;
cout<<"2.Masuk ATM"<<endl;
cout<<"pilihan "; cin>>pil;

switch(pil){
case 1: menu(); break;
case 2: utama(); break;
}
}

