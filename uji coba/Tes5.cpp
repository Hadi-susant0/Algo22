#include <iostream>
#include <fstream>
using namespace std;

struct dataPengguna{
	string nama;
	int noKTP, noHP, noRek, Pin;
	double saldo;
};

int main() {
	fstream data;
	data.open("data.txt", ios::trunc);
	
	while(true){
		string nama;
		cin>>nama;
		data<<nama;
		
		false;
	}
}
