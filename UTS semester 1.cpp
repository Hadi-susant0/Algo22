#include <iostream>
using namespace std;

int main() {
	int pil, jmlPaket, jmlTunai, total, harga, GT;
	string nama, namaPaket;
	char tunai;
	
	cout<<"#Paket Donasi Covid-19#"<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"1. Sembako (Rp. 100.000)"<<endl;
	cout<<"2. Sembako + Masker (Rp. 150.000)"<<endl;
	cout<<"3. Sembako + Face Shield (Rp. 250.000)"<<endl;
	cout<<"4. Sembako + APD (Rp. 500.000)"<<endl;
	cout<<"5. Sembako + ALL (Rp. 1000.000)"<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"Masukkan pilihan anda (1-5): "; cin>>pil;
	
	if(pil==1){
		namaPaket ="Sembako"; harga = 100000;
	} else if (pil==2){
		namaPaket ="Sembako + Masker"; harga = 150000;
	} else if (pil==3){
		namaPaket ="Sembako + Face Shield"; harga = 250000;
	} else if (pil==4){
		namaPaket = "Sembako + APD"; harga = 500000;
	} else if (pil==5){
		namaPaket = "Sembako + ALL"; harga = 1000000;
	} else {
		namaPaket = "Salah pilih"; harga = 0;
	}
	
	cout<<"Masukkan Nama Anda: "; cin>>nama;
	cout<<"Masukkan Jumlah Paket yang akan disumbangkan: "; cin>>jmlPaket;
	cout<<"Ingin menambah sumbangan tunai (y/t)? "; cin>>tunai;
	
	if (tunai == 'y' || tunai == 'Y'){
		cout<<"Jumlah Sumbangan Tunai anda: "; cin>>jmlTunai;
	} else {
		jmlTunai=0;
	}
	
	total =  jmlPaket * harga;
	GT = total + jmlTunai;
	
	cout<<"-----------------------"<<endl;
	cout<<"Terima kasih "<<nama<<" Atas bantuan anda"<<endl;
	cout<<"Paket yang anda sumbangkan: "<<namaPaket<<endl;
	cout<<"Sumbangan Tunai anda: "<<jmlTunai<<endl;
	cout<<"Total yang harus dibayarkan: "<<GT<<endl;

	return 0;
}
