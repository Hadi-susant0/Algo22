#include<iostream>

using namespace std;

struct dataPelanggan{
	char noKTP;
	string nama;
	int rekening[3];
	int pin[3];
};

int main(){
	register dataPelanggan pel;
	cout<<"========Selamat Datang=========="<<endl;


	
	cout<<endl<<endl<<pel.nama;
	cout<<pel.rekening;
	cout<<pel.pin;
}
