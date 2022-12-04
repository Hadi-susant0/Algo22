#include<iostream>
#include<fstream>
#include<unistd.h>
using namespace std;

//struct data
struct dataPengguna{
	string nama;
	int noKTP, noHP, Pin, noRek;
	double saldo;
};

//variabel global
dataPengguna p;
int pilihan;
int pil2;

void transaksi();
void dataFinish();
void quit();
void menu();

void akhir(){
	cout<<"1. Melakukan transaksi kembali"<<endl;
	cout<<"2. Keluar Aplikasi"<<endl;
	cout<<"Masukkan pilihan: "; cin>>pil2;
	
	
	if(pil2 == 1){
		transaksi();
	} else if(pil2 == 2){
		quit();
	}
}

//searching
int searchSaldo(dataPengguna arr[], int n, int x){
	int i;
	for (i=0; i<n; i++)
		if (arr[i].noRek == x)
			return i;
	return 0;		
}
int search(dataPengguna arr[], int n, int x){
		int i;
		for (i=0; i<n; i++)
			if (arr[i].noRek == x)
				return i;
			return -1;	
	}	
int searchPin(dataPengguna arr[], int n, int x, int i){
		if (arr[i].Pin == x)
			return 1;
	return 0;		
}

//tampilan awal
void welcome(){
	cout<<"===================================="<<endl<<endl;
	cout<<"           SELAMAT DATANG"<<endl<<endl;
	cout<<"===================================="<<endl;
	
	sleep(5);
}

//keluar aplikasi
void quit(){
	system("cls");
	cout<<"+-----------------------------------+"<<endl;
	cout<<"|                                   |"<<endl;
	cout<<"|           Terima Kasih            |"<<endl;
	cout<<"|           Bank Wakanda            |"<<endl;
	cout<<"|                                   |"<<endl;
	cout<<"+-----------------------------------+"<<endl;
	cin.ignore();
}

void saldo(){
	
}

//pembuatan rekening
void rekeningBaru(){

	fstream myDb;
	myDb.open("dataPelanggan.txt", ios::app);
	cin.ignore();
	system("cls");
	
	cout<<"Masukkan nama                           : "; getline(cin,p.nama);
	cout<<"Masukkan No KTP                         : "; cin>>p.noKTP;
	cout<<"Masukkan No Hp                          : "; cin>>p.noHP;
	cout<<"Buat No Rekening(sesuai keinginan)      : "; cin>>p.noRek;
	cout<<"Buat No PIN                             : "; cin>>p.Pin;

	p.saldo=0;
	myDb<<p.nama<<endl;
	myDb<<p.noKTP<<endl;
	myDb<<p.noHP<<endl;
	myDb<<p.noRek<<endl;
	myDb<<p.Pin<<endl<<endl;
	myDb.close();

	fstream mySaldo;
	mySaldo.open("bookSaldo.txt", ios::app);
	
	mySaldo<<p.noRek<<endl;
	mySaldo<<p.Pin<<endl;
	mySaldo<<p.saldo<<endl<<endl;
	
	mySaldo.close();
	dataFinish();
}

//cek saldo
void cekSaldo(int noRek){
	int pil2;
	dataPengguna c[2];
	system("cls");
	fstream mySaldo;
	mySaldo.open("bookSaldo.txt");
		
	int b=0;
	while (b<2){
		while(!mySaldo.eof()){
				mySaldo>>c[b].noRek;
				mySaldo>>c[b].Pin;
				mySaldo>>c[b].saldo;
			b++;
		}
	}
	
	int n = sizeof(c)/sizeof(c[0]);
	int resultSaldo = searchSaldo(c, n, noRek);
	
	cout<<"Info Saldo"<<endl;
	cout<<"No Rekening   : "<<noRek<<endl;
	cout<<"Saldo anda    : Rp "<<c[resultSaldo].saldo<<".00"<<endl;
	
	cin.ignore();
	cout<<"Saldo Anda: "<<endl;
	
	akhir();
}

// setor tunai
void setorTunai(int pin, int noRek){
	system("cls");
	dataPengguna d[2];
	double saldo;
	fstream readSaldo;
	readSaldo.open("bookSaldo.txt", ios::in | ios::out);
	
	cout<<"Masukkan nominal Saldo anda (Rp): "; cin>>saldo;
	
	int b=0;
	while (b<2){
		while(!readSaldo.eof()){
				readSaldo>>d[b].noRek;
				readSaldo>>d[b].Pin;
				readSaldo>>d[b].saldo;
			b++;
		}
	}
	
	int n = sizeof(d)/sizeof(d[0]);
	int resultSaldo = searchSaldo(d, n, noRek);
	
	
	if( pin == d[resultSaldo].Pin && noRek == d[resultSaldo].noRek){
		d[resultSaldo].saldo = d[resultSaldo].saldo + saldo;
    } 
    
    readSaldo.close();	
    
    ofstream mySaldo("bookSaldo.txt");
    for(int a=0; a<2; a++){
    	mySaldo<<d[a].noRek<<endl;
		mySaldo<<d[a].Pin<<endl;
		mySaldo<<d[a].saldo<<endl<<endl;

	cout<<d[a].noRek<<endl;
	cout<<d[a].Pin<<endl;
	cout<<d[a].saldo<<endl;
	}	
	
	mySaldo.close();
		
	system("cls");
	cout<<"======== INFO SALDO ========"<<endl;
	cout<<"No.rekening anda   :"<<d[resultSaldo].noRek<<endl;
	cout<<"Saldo              :"<<d[resultSaldo].saldo<<endl<<endl;
	
	akhir();
}

//tarik tunai
void tarikTunai(int pin, int noRek){
	system("cls");
	dataPengguna d[2];
	double saldo;
	fstream readSaldo;
	readSaldo.open("bookSaldo.txt", ios::in | ios::out);
	
	cout<<"Masukkan nominal Saldo anda (Rp): "; cin>>saldo;
	
	int b=0;
	while (b<2){
		while(!readSaldo.eof()){
				readSaldo>>d[b].noRek;
				readSaldo>>d[b].Pin;
				readSaldo>>d[b].saldo;
			b++;
		}
	}
	
	int n = sizeof(d)/sizeof(d[0]);
	int resultSaldo = searchSaldo(d, n, noRek);
	
	
	if( pin == d[resultSaldo].Pin && noRek == d[resultSaldo].noRek){
		d[resultSaldo].saldo = d[resultSaldo].saldo - saldo;
    } 
    
    readSaldo.close();	
    
    ofstream mySaldo("bookSaldo.txt");
    for(int a=0; a<2; a++){
    	mySaldo<<d[a].noRek<<endl;
		mySaldo<<d[a].Pin<<endl;
		mySaldo<<d[a].saldo<<endl<<endl;

	cout<<d[a].noRek<<endl;
	cout<<d[a].Pin<<endl;
	cout<<d[a].saldo<<endl;
	}	
	
	mySaldo.close();
		
	system("cls");
	cout<<"======== INFO SALDO ========"<<endl;
	cout<<"No.rekening anda   :"<<d[resultSaldo].noRek<<endl;
	cout<<"Saldo              :"<<d[resultSaldo].saldo<<endl<<endl;
	
	akhir();
}

//transfer1
void antarBank(int pin, int noRek){
	system("cls");
	dataPengguna d[2];
	int rektujuan;
	double saldo;
	fstream readSaldo;
	readSaldo.open("bookSaldo.txt", ios::in | ios::out);
	
	cout<<"Masukkan nomor rekening pengguna : "; cin>>rektujuan;
	cout<<"Masukkan nominal Saldo (Rp)      : "; cin>>saldo;
	
	int b=0;
	while (b<2){
		while(!readSaldo.eof()){
				readSaldo>>d[b].noRek;
				readSaldo>>d[b].Pin;
				readSaldo>>d[b].saldo;
			b++;
		}
	}
	
	int n = sizeof(d)/sizeof(d[0]);
	int resultSaldo = searchSaldo(d, n, noRek);
	
	
	if( pin == d[resultSaldo].Pin && noRek == d[resultSaldo].noRek){
		d[resultSaldo].saldo = d[resultSaldo].saldo - saldo;
    } 
    
    int resultSaldoTF = searchSaldo(d, n, rektujuan);
    
    if(rektujuan == d[resultSaldoTF].noRek){
		d[resultSaldoTF].saldo = d[resultSaldoTF].saldo + saldo;
    } 
    
    readSaldo.close();
    
    ifstream readFile("dataPelanggan.txt");
	dataPengguna a[5];
	int c=0;
		while (c<2){
			while(!readFile.eof()){
				readFile>>a[c].nama;
				readFile>>a[c].noKTP;
				readFile>>a[c].noHP;
				readFile>>a[c].noRek;
				readFile>>a[c].Pin;
				c++;
			}
		}
	int q = sizeof(a)/sizeof(a[0]);
	int resultNama = search(a, q, rektujuan);
	
	string nama = a[resultNama].nama;
	readFile.close();
    
    ofstream mySaldo("bookSaldo.txt");
    for(int a=0; a<2; a++){
    	mySaldo<<d[a].noRek<<endl;
		mySaldo<<d[a].Pin<<endl;
		mySaldo<<d[a].saldo<<endl<<endl;

	cout<<d[a].noRek<<endl;
	cout<<d[a].Pin<<endl;
	cout<<d[a].saldo<<endl;
	}	
	
	mySaldo.close();
	
	system("cls");
	cout<<"======== INFO TRANSFER ========"<<endl;
	cout<<"No tujuan          : "<<rektujuan<<endl;
	cout<<"Nama Tujuan        : "<<nama<<endl;
	cout<<"Nominal            : "<<saldo<<endl<<endl;
	
	akhir();
}
//transfer2
void bedabank(int pin, int noRek){
	system("cls");
	dataPengguna d[2];
	string namaBank, namaPengguna;
	int rektujuan;
	double saldo;
	fstream readSaldo;
	readSaldo.open("bookSaldo.txt", ios::in | ios::out);
	
	cout<<"Masukkan Nama Bank tujuan        : "; cin>>namaBank;
	cin.ignore();
	cout<<"Masukkan Nama pengguna           : "; getline(cin,namaPengguna);
	cout<<"Masukkan nomor rekening pengguna : "; cin>>rektujuan;
	cout<<"Masukkan nominal Saldo (Rp)      : "; cin>>saldo;
	
	int b=0;
	while (b<2){
		while(!readSaldo.eof()){
				readSaldo>>d[b].noRek;
				readSaldo>>d[b].Pin;
				readSaldo>>d[b].saldo;
			b++;
		}
	}
	
	int n = sizeof(d)/sizeof(d[0]);
	int resultSaldo = searchSaldo(d, n, noRek);
	
	
	if( pin == d[resultSaldo].Pin && noRek == d[resultSaldo].noRek){
		d[resultSaldo].saldo = d[resultSaldo].saldo - saldo;
    } 
    
    readSaldo.close();	
    
    ofstream mySaldo("bookSaldo.txt");
    for(int a=0; a<2; a++){
    	mySaldo<<d[a].noRek<<endl;
		mySaldo<<d[a].Pin<<endl;
		mySaldo<<d[a].saldo<<endl<<endl;

	cout<<d[a].noRek<<endl;
	cout<<d[a].Pin<<endl;
	cout<<d[a].saldo<<endl;
	}	
	
	mySaldo.close();
		
	system("cls");
	cout<<"======== INFO TRANSFER ========"<<endl;
	cout<<"Bank Tujuan        : "<<namaBank<<endl;
	cout<<"Nama Tujuan        : "<<namaPengguna<<endl;
	cout<<"No tujuan          : "<<rektujuan<<endl;
	cout<<"Nominal            : "<<saldo<<endl<<endl;
	
	akhir();
}
//menu transfer
void transfer(int pin, int noRek){
	system("cls");
	cout<<"+-----------------------------------+"<<endl;
	cout<<"|========== Bank Wakanda ===========|"<<endl;
	cout<<"|    1. Antar Bank                  |"<<endl;
	cout<<"|    2. Bank Lain                   |"<<endl;
	cout<<"|    0. Keluar aplikasi             |"<<endl;
	cout<<"+-----------------------------------+"<<endl<<endl;
	
	cout<<"Pilih Transaksi: "; cin>>pilihan;
	
	switch (pilihan){
		case 1: antarBank(pin, noRek);break;
		case 2: bedabank(pin, noRek); break;
		default: quit(); break;
	}
}

//pilihan transaksi
void valueTransaksi(int pin, int noRek){
	system("cls");
	cout<<"+-----------------------------------+"<<endl;
	cout<<"|========== Bank Wakanda ===========|"<<endl;
	cout<<"|    1. Cek Saldo                   |"<<endl;
	cout<<"|    2. Setor Tunai                 |"<<endl;
	cout<<"|    3. Tarik Tunai                 |"<<endl;
	cout<<"|    4. Transfer                    |"<<endl;
	cout<<"|    0. Keluar aplikasi             |"<<endl;
	cout<<"+-----------------------------------+"<<endl<<endl;
	
	cout<<"Pilih Transaksi: "; cin>>pilihan;
	
	switch (pilihan){
		case 1: cekSaldo(noRek); break;
		case 2: setorTunai(pin, noRek) ;break;
		case 3: tarikTunai(pin, noRek);break;
		case 4: transfer(pin, noRek); break;
		default: quit(); break;
	}
}

//menu transaksi
void transaksi(){
	ifstream readFile("dataPelanggan.txt");
	dataPengguna a[5];
	int pin, noRek;
	system("cls");
	
	cout<<"=========== Bank Wakanda ============"<<endl;
	cout<<"Masukkan No Rekening    : "; cin>>noRek;
	cout<<"Masukkan No pin         : "; cin>>pin;
	
		int b=0;
		while (b<2){
			while(!readFile.eof()){
				readFile>>a[b].nama;
				readFile>>a[b].noKTP;
				readFile>>a[b].noHP;
				readFile>>a[b].noRek;
				readFile>>a[b].Pin;
				b++;
			}
		}
	
	string ketRek, KetPin;
			
	int n = sizeof(a)/sizeof(a[0]);
	int result = search(a, n, noRek);
	(result != -1)? ketRek="true": ketRek="false";
	
	int resultPin = searchPin(a, n, pin, result);
	(resultPin == 1)? KetPin="true": KetPin="false";
			
		if( ketRek=="true" && KetPin=="true"){
			valueTransaksi(pin, noRek);
    	} else {
  	    	cout<<"\n\n MOHON PERIKSA KEMBALI NO REKENING DAN PIN ANDA!!!"; sleep(5); 
			transaksi();
    	}

	readFile.close();
}

//Tampilan Tentang Kami
void tentangkami(){
	system("cls");
	cout<<"+----------------------------------------------------------------------------------------+"<<endl;
	cout<<"|===================================== Tentang Kami =====================================|"<<endl;
	cout<<"|  Wakanda Bank adalah sebuah bisnis yang bergerak di bidang finansial ataupun ekonomi   |"<<endl;
	cout<<"|yang cocok juga untuk kamu bagi kaum kaula muda. Dilandasi oleh aturan untuk menjaga    |"<<endl;
	cout<<"|keamanan keuangan para pengguna kami dan membantu mereka dalam memudahkan bertransaksi  |"<<endl;
	cout<<"|di mana pun dan kapan pun. Masih banyak profit yang bisa kamu dapatkan.                 |"<<endl;
	cout<<"|                           Mari bergabung bersama Wakanda Bank                          |"<<endl;
	cout<<"+----------------------------------------------------------------------------------------+"<<endl<<endl;
	
	cout<<"[1]Kembali ke tampilan awal"<<endl;
	cout<<"[0]Keluar aplikasi"<<endl;
	
	cout<<"Masukkan Pilihan : "; cin>>pilihan;
	
	switch(pilihan){
		case 1 : menu(); break;
		default : quit();
	}
}

//tampilan menu
void menu(){
	
	system("cls");
	cout<<"+-----------------------------------+"<<endl;
	cout<<"|=========== Menu Utama ============|"<<endl;
	cout<<"|                                   |"<<endl;
	cout<<"|    1. Buka Rekening Baru          |"<<endl;
	cout<<"|    2. Transaksi                   |"<<endl;
	cout<<"|    3. Tentang Kami                |"<<endl;
	cout<<"|    0. Keluar aplikasi             |"<<endl;
	cout<<"|                                   |"<<endl;
	cout<<"+-----------------------------------+"<<endl;

	cout<<"     Pilihan anda : "; cin>>pilihan;
	
	switch(pilihan){
		case 1: rekeningBaru(); break;
		case 2: transaksi(); break;
		case 3: tentangkami(); break;
		default: quit(); break;
	}
}

void dataFinish(){
	system("cls");
	int a;
	cout<<"======================================================"<<endl<<endl;
	cout<<"           Data anda telah berhasil diinput"<<endl<<endl;
	cout<<"======================================================"<<endl;
	cout<<"[1]Kembali ke tampilan awal"<<endl;
	cout<<"[2]Buat akun lagi"<<endl;
	cout<<"[3]Lakukan transaksi"<<endl;
	cout<<"[0]Keluar aplikasi"<<endl;
	cout<<"Masukkan Angka : "; cin>>pilihan;
	
	switch(pilihan){
		case 1 : menu(); break;
		case 2 : rekeningBaru(); break;
		case 3 : transaksi();break;
		default : quit(); break;
	}
}

int main(){
	welcome();
	menu();
}
