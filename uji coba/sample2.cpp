#include<iostream>
#include<fstream>
using namespace std;

struct dataPelanggan{
	string noKTP;
	string nama;
	int rekening;
	int pin;
};

//void menu(){
//	dataPelanggan p[5];
//
//	fstream MyFile;
//	MyFile.open("dataPelanggan.txt");
//
//	
//		for (int i = 0; i < 2; i++){
//		cout<<"No KTP \t "; cin>>p[i].noKTP;
//	cout<<"Nama \t "; cin>>p[i].nama;
//	cout<<"No Rekening \t "; cin>>p[i].rekening;
//	cout<<"Pin (6 angka) \t "; cin>>p[i].pin;
//	
//	system("cls");
//	
//	}
//	
//	for (int i = 0; i < 2; i++){
//	MyFile:ios::app << p[i].noKTP<<endl;
//	MyFile << p[i].nama<<endl;
//	MyFile << p[i].rekening<<endl;
//	MyFile << p[i].pin<<endl<<endl;
//}
//	MyFile.close();
//}

void utama(){
	int norek;
	int pin;
	dataPelanggan p;

	cout<<"Masukkan No.Rekening \t"; cin>>norek;
	cout<<"Masukkan No Pin \t"; cin>>pin;

	ifstream MyReadFile("dataPelanggan.txt");

//	cout<<norek<<endl;

	MyReadFile>>p.noKTP;
	MyReadFile>>p. ;
	MyReadFile>>p.rekening;
	MyReadFile>>p.pin;
	
	while(!MyReadFile.eof()){

	cout<<p.rekening<<endl;
	cout<<norek<<endl;
	cout<<p.pin<<endl;
	cout<<pin<<endl;
	
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
//case 1: menu(); break;
case 2: utama(); break;
}
}

