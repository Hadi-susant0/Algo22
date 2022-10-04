#include <iostream>
using namespace std;

int main(){
	string Nama, tipe, ket;
	int kamar, waktu, harga, total;
	char a;
	
	cout<<"Hotel Bahagia"<<endl;
	cout<<"============="<<endl;
	cout<<"1. VVIP (1.000.000)"<<endl;
	cout<<"2. VIP (750.000)"<<endl;
	cout<<"3. Standard (500.000)"<<endl;
	cout<<"4. Melati (250.000)"<<endl;
	cout<<"================================="<<endl;
	cout<<"Masukkan nama anda: "; getline(cin,Nama);
	cout<<"Masukkan jenis kamar (1-4): "; cin>>kamar;
	cout<<"Lama inap: "; cin>>waktu;
	cout<<"Dengan sarapan (y/n) 50rb/hr: "; cin>>a;
	cout<<"================================="<<endl;
	
	switch(kamar){
		case 1: harga = 1000000; tipe = "VVIP"; break;
		case 2: harga = 750000; tipe = "VIP"; break;
		case 3: harga = 500000; tipe = "Standard"; break;
		case 4: harga = 250000; tipe = "Melati"; break;
		default: harga = 0; tipe = "kamar anda tidak ditemui";
	}
	
	if(a == 'Y' || a == 'y'){
		total = (harga * waktu) + (50000 * waktu); ket = "dengan sarapan";
	} else {total = (harga * waktu); ket = "tanpa sarapan";
	} //if(kondisi){perintah 1 ; perintah 2;} else {perintah 1; perintah 2;}
	
	if (kamar >= 1 && kamar <= 4 && waktu != 0){
	cout<<"Terima kasih "<< Nama <<endl;
	cout<<"Kamar anda "<< tipe <<endl;
	cout<<"Lama menginap "<<waktu<<" Malam "<<ket<<endl;
	cout<<"total bayar: "<< total <<endl;
	} else {cout<<"Kamar anda tidak ditemui (tolong, isi data dengan tepat)";
	}
	
	return 0;
}



































