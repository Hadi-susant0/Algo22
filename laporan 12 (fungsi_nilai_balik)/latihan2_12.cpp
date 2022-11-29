#include<iostream>
using namespace std;

int volumeBalok (double panjang, double lebar, double tinggi){
	return panjang * lebar * tinggi;
}

void menu(){
	int p, l, t;
	cout<<"Masukkan nilai panjang: "; cin>>p;
	cout<<"Masukkan nilai lebar: "; cin>>l;
	cout<<"Masukkan nilai tinggi: "; cin>>t;
	cout<<"Nilai Volume balok dengan sisi "<<p<<", "<<l<<", "<<t
	<<"adalah "<<volumeBalok(p,l,t);
}

int main(){
	menu();
	
	return 0;
}


