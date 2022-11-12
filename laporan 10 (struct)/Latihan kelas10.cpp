#include<iostream>
using namespace std;

struct mahasiswa{
	string nim;
	string nama;
	string prodi;
	float ipk;
};

int main(){
	mahasiswa mhs[5];
	int jum;
	
	cout<<"aplikasi data mahasiswa"<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"Data mahasiswa yang ingin dimasukkan (max 5): "; cin>>jum;
	for(int i=0; i<jum; i++){
		cout<<"Data mahasiswa ke-"<<i+1<<endl;
		cout<<" Masukkan Nama: "; cin>>mhs[i].nama;
		cout<<" Masukkan NIM: "; cin>>mhs[i].nim;
		cout<<" Masukkan Program Studi: "; cin>>mhs[i].prodi;
		cout<<" Masukkan IPK: "; cin>>mhs[i].ipk;
	}
	
	system("cls");
	
	cout<<"Data yang telah dimasukkan"<<endl;
	cout<<"--------------------------"<<endl;
	
	for (int i=0; i<jum; i++){
		cout<<"Data mahasiswa ke-"<<i+1<<endl;
		cout<<" Masukkan Nama: "<<mhs[i].nama<<endl;
		cout<<" Masukkan NIM: "<<mhs[i].nim<<endl;
		cout<<" Masukkan Program Studi: "<<mhs[i].prodi<<endl;
		cout<<" Masukkan IPK: "<<mhs[i].ipk<<endl;
	}
}
