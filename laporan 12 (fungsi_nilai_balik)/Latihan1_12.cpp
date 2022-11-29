#include <iostream>
using namespace std;

void aplikasi(){
	cout<<"Aplikasi Menghitung Kebutuhan Kalori"<<endl;
	cout<<"===================================="<<endl;
}

int beratBadanIdeal(string gender, double beratBadan, double tinggiBadan, double usia){
	double berat, K_Pria, K_Wanita, Out; 
	string output;
	
	K_Pria = ((88.4 + 13.4 * beratBadan) + (4.8 * tinggiBadan) - (5.68 * usia));
	K_Wanita = ((447.6 + 9.25 * beratBadan) + (3.1 * tinggiBadan) - (4.33 * usia));
	
	if(gender == "Pria" || gender == "pria" || gender == "Laki-laki" || gender == "laki-laki") Out = K_Pria;
	else
	Out = K_Wanita;
	
	return Out;
}

double angka(double indeks){
	if(indeks < 1.2) indeks= 0; 
	else
	if(indeks > 1.9) indeks= 0;
	
	return indeks;
}

int main(){
	string nama, gender;
	double beratBadan, tinggiBadan, usia, indeks;
	int out;
	
	aplikasi();
	cout<<"Masukan Nama : "; getline(cin,nama);
	cout<<"Masukan Jenis Kelamin (Pria,Wanita) : "; cin>>gender;
	cout<<"Masukan Berat badan (dalam kilogram): "; cin>>beratBadan;
	cout<<"Masukan Tinggi badan (dalam sentimeter): "; cin>>tinggiBadan;
	cout<<"Masukan usia (dalam tahun): "; cin>>usia;
	cout<<"Masukkan rata-rata angka aktivitas (indeks 1.2 - 1.9): "; cin>>indeks;
	cout<<"========================================================="<<endl;
	out = beratBadanIdeal(gender,beratBadan,tinggiBadan,usia);
	
	if(angka(indeks) == 0) {cout<<"Masukan Indeks aktivitasnya sesuai perintah, Terima kasih";
	}else{
		cout<<"Hi, "<<nama<<". kalori yang dibutuhkan tubuh anda adalah "<<out<<" ~ "<< out * angka(indeks) << " Kkal"<<endl;
		cout<<"========================================================="<<endl;	
	}
	
	return 0;
}



