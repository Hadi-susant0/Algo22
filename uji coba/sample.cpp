#include<iostream>
#include<fstream>
using namespace std;

struct dataPelanggan{
	string noKTP;
	string nama;
	int rekening;
	char pin[6];
};

void menu(){
	dataPelanggan p;

	ofstream MyFile("dataPelanggan.txt");

	cout<<"No KTP \t "; cin>>p.noKTP;
	cout<<"Nama \t "; cin>>p.nama;
	cout<<"No Rekening \t "; cin>>p.rekening;
	cout<<"Pin (6 angka) \t "; cin>>p.pin;

	MyFile<<p.noKTP<<endl;
	MyFile<<p.nama<<endl;
	MyFile<<p.rekening<<endl;
	MyFile<<p.pin<<endl<<endl;

	MyFile.close();
}

void utama(){
	int norek;
	char pin[6];
	dataPelanggan p;

	cout<<"Masukkan No.Rekening \t"; cin>>norek;
	cout<<"Masukkan No Pin \t"; cin>>pin;

	ifstream MyReadFile("dataPelanggan.txt");

	cout<<norek<<endl;

	MyReadFile>>p.noKTP;
	MyReadFile>>p.nama;
	MyReadFile>>p.rekening;
	MyReadFile>>p.pin;
	
	while(!MyReadFile.eof()){

	cout<<p.rekening<<endl;
	cout<<norek<<endl;
	cout<<p.pin<<endl;
	cout<<pin<<endl;
	
	if(norek == p.rekening  && pin == p.pin){
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

