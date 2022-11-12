#include<iostream>
using namespace std;

void aplikasi(){
	cout<<"Aplikasi Menghitung Volume Balok"<<endl;
	cout<<"================================"<<endl;
}

void volumeBalok(double panjang, double lebar, double tinggi){
	double volume;
	
	volume = panjang * lebar * tinggi;
	
	cout<<"Volume tabung dengan panjang "<<panjang<<", lebar "<<lebar<<", tinggi "<<tinggi<<" adalah "<<volume;
}

int main(){
	double panjang, lebar, tinggi;

	aplikasi();
	cout<<"Masukkan nilai Panjang: "; cin>>panjang;
	cout<<"Masukkan nilai Lebar: "; cin>>lebar;
	cout<<"Masukkan nilai tinggi: "; cin>>tinggi;
	volumeBalok(panjang,lebar,tinggi);
	
	return 0;
}


