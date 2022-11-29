#include<iostream>
using namespace std;

int persegipanjang (int panjang, int lebar){
	int hasil;
	hasil = panjang * lebar;
	return hasil;
}

int main(){
	int p, l;
	cout<<"Masukkan Panjang: ";cin>>p;
	cout<<"Masukkan Lebar: "; cin>>l;
	cout<<"Luas Persegi Panjang: "<<persegipanjang(p,l);
}


