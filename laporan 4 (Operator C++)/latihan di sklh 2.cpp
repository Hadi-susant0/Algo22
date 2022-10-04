#include <iostream>
using namespace std;

int main()
{
	string Nama, prodi, mata_kuliah;
	int Umur;
	
	cout<<"Masukkan nama anda : "; getline(cin,Nama);
	cout<<"Masukkan umur anda : "; cin>>Umur;
	cout<<"Masukkan prodi anda : "; cin>>prodi;
	cout<<"Nama mata kuliah yang paling disukai : "; cin>>mata_kuliah;
	cout<<"========================================================="<<endl;
	
	cout<<"saya "<<Nama<<", umur "<<Umur<<" Tahun dari prodi "<<prodi<<" dengan ini menyatakan suka sekali dengan mata kuliah "<<mata_kuliah<<endl;
}
