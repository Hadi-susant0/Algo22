#include <iostream>
using namespace std;

#define garis "================================="

int main()
{
	string Nama_Barang, Nama_Pelanggan;
	int Harga_Barang, Total_belanja;
	double Jumlah_Barang;
	
	cout<<"APLIKASI BELANJA"<<endl;
	cout<<garis<<endl;
	cout<<"Masukkan nama pelanggan : "; getline(cin,Nama_Pelanggan);
	cout<<"Masukkan nama barang : "; getline(cin,Nama_Barang);
	cout<<"Masukkan harga barang : "; cin>>Harga_Barang;
	cout<<"Masukkan Jumlah beli : "; cin>>Jumlah_Barang;
	cout<<garis<<endl;
	
	Total_belanja = Harga_Barang * Jumlah_Barang;
	
	
	cout<<"Barang yang anda beli adalah "<<Nama_Barang<<endl;
	cout<<"Dengan harga "<<Harga_Barang<<endl;
	cout<<"Total bayar "<<Total_belanja<<endl;
	(Total_belanja > 500000) ? (cout<<"Bonus Payung")<<endl : (cout<<"Terima kasih")<<endl;
	cout<<garis<<endl;
	cout<<"--TERIMA KASIH "<<Nama_Pelanggan<<" --";
	
	return 0;
}
