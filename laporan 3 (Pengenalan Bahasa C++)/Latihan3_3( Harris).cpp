#include <iostream>
using namespace std;

int main()
{
	string a, gender;
	double b, c, d, e, berat, K_Pria, K_Wanita, Out;
	
	cout<<"Aplikasi Menghitung Kebutuhan Kalori"<<endl;
	cout<<"===================================="<<endl;
	
	cout<<"Masukan Nama : "; cin>>a;
	getline(cin,a);
	cout<<"Masukan Jenis Kelamin (Pria,Wanita) : "; cin>>gender;
	cout<<"Masukan Berat badan (dalam kilogram): "; cin>>b;
	cout<<"Masukan Tinggi badan (dalam sentimeter): "; cin>>c;
	cout<<"Masukan usia (dalam tahun): "; cin>>d;
	cout<<"Masukkan rata-rata angka aktivitas (indeks 1.2 - 1.9): "; cin>>e;
	cout<<"========================================================="<<endl;
	
	if(e < 1.2) e= 0; 
	else
	if(e > 1.9) e= 0;
	
	K_Pria = ((88.4 + 13.4 * b) + (4.8 * c) - (5.68 * d));
	K_Wanita = ((447.6 + 9.25 * b) + (3.1 * c) - (4.33 * d));
	
	if(gender == "Pria" || gender == "pria" || gender == "Laki-laki" || gender == "laki-laki") Out = K_Pria;
	else
	Out = K_Wanita;
	
	if(e == 0) cout<<"Masukan Indeks aktivitasnya sesuai perintah, Terima kasih";
	else
	cout<<"Kalori yang dibutuhkan tubuh adalah "<<Out<<" ~ "<< Out * e << " Kkal"<<endl;
	cout<<"========================================================="<<endl;
	
	return 0;
}
