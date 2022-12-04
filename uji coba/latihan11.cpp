#include <iostream>
#include <fstream>
#include<unistd.h>
using namespace std;

void transaksi(){
		int noRek, pin;
		system("cls");
	cout<<"=========== Bank Wakanda ============"<<endl;
	cout<<"Masukkan No Rekening    : "; cin>>noRek;
	cout<<"Masukkan No pin         : "; cin>>pin;
	
	ifstream readFile("dataPelanggan.txt");
	
	
	while(!readFile.eof()){
		if( pin == 1){
			cout<<"benar";
    	} else {
  	    	cout<<"\n\n MOHON PERIKSA KEMBALI NO REKENING DAN PIN ANDA"; sleep(5); transaksi();
    	}
}
}

int main(){
	transaksi();

}
