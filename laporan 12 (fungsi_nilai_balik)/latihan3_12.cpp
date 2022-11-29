#include<iostream>
using namespace std;

string bonus(int harga){
	string ket;
	if(harga > 100000){
		ket = "Anda mendapatkan Bonus Payung";
	} else if (harga>800000){
		ket = "Anda mendapatkan Bonus Baju";
	}else if(harga>600000){
		ket = "Anda mendapatkan Bonus sepatu";
	}else if(harga > 400000){
		ket = "Anda mendaptkan Bonus Buku";
	}else if(harga > 200000){
		ket = "Anda mendapatkan Bonus snack";
	}
	
	return ket;
}

int main(){
	int harga;
	string nItem, isiKet;
	char ket;
	
	cout<<"Nama item: "; cin>>nItem;
	cout<<"Harga item: "; cin>>harga;
	cout<<"Apakah ada keterangan lain (Y/N): "; cin>>ket;
	if(ket == 'Y'){
		cout<<"Masukkan keterangan lain: "; cin>>isiKet;
	}
	cout<<"Pembelian item "<<nItem<<" dengan harga "<<harga<<" mendapatkan bonus berupa "<<bonus(harga);
	
	return 0;
}


