#include <iostream>
using namespace std;

int main()
{
	string a, e, gender;
	double b, c, k, usia, Out, KKT, Fk;
	
	cout<<"Aplikasi Menghitung Kebutuhan Kalori"<<endl;
	cout<<"===================================="<<endl;
	
	cout<<"Masukan Nama : "; cin>>a;
	getline(cin,a);
	cout<<"Masukan Jenis Kelamin (Pria,Wanita): "; cin>>gender;
	cout<<"Masukan Berat badan (dalam kilogram): "; cin>>b;
	cout<<"Masukan Tinggi badan (dalam sentimeter): "; cin>>c;
	cout<<"Masukan usia (dalam tahun): "; cin>>usia;
	cout<<"1. Membaca"<<endl;
	cout<<"2. Menyetir"<<endl;
	cout<<"3. Berjalan"<<endl;
	cout<<"4. Menyapu"<<endl;
	cout<<"5. Jalan cepat"<<endl;
	cout<<"6. Bersepeda"<<endl;
	cout<<"7. Aerobik"<<endl;
	cout<<"8. Jogging"<<endl;
	cout<<"Pilihlah angka berikut jika aktivitas diatas tidak cocok dengan anda."<<endl;
	cout<<"9. Aktivitas Ringan"<<endl;
	cout<<"10 Aktivitas Sedang"<<endl;
	cout<<"11. Aktivitas Berat"<<endl;
	cout<<"Masukan aktivitas dominan anda sesuai dengan angka diatas: "; cin>>e;
	cout<<"==========================================================================================="<<endl;
	
	if((e == "1") || (e == "2") || (e == "9")) k= 0.1;
	else
	
	if((e == "3") || (e == "4")) k= 0.2;
	else
	
	if((e == "5") || (e == "6") || (e == "10")) k= 0.3;
	else
	
	if((e == "7") || (e == "8") || (e == "11")) k= 0.4;
	else
	
	k= 0;
	
	if(usia < 40.0) Fk= 0;
	else
	
	if(usia < 60.0) Fk= 0.05;
	else
	
	if(usia < 70.0) Fk= 0.1;
	else
	
	Fk= 0.2;
	
	if(gender == "Pria" || gender == "pria" || gender == "Laki-laki" || gender == "laki-laki") Out = ((c-100) - (c -100) * 10/100) * 30;
	else
	Out = ((c -100) - (c -100) * 15/100) * 25;
	
	KKT = Out + (k * Out) - (Fk * Out);
	
	cout<<"Kalori yang dibutuhkan tubuh anda adalah "<<Out<<" (Tidak beraktivitas) "<<" ~ "<<KKT<<" (Beraktifitas) "<<endl;
	cout<<"==========================================================================================="<<endl;
	
	return 0;
}
