#include <iostream>
using namespace std;

int main	()
	{
		string pesan =  "Selamat Belajar Di belajarcpp.com", kalimat = "";
		
		cout<<pesan<<endl;
		getline(cin,kalimat); //Fungsi input agar dapat membaca kalimat panjang
		cout<<kalimat<<endl;
		
		return 0;
	}
