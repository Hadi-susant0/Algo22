#include<iostream>
using namespace std;

void garis(){
	cout<<"--------------"<<endl;
}

void namaku (string nama, int umur){
	cout<<"Nama saya: "<<nama<<endl;
	cout<<"Umur saya "<<umur;
}

int main(){
	string kata;
	kata = "Uvers keren";
	int umur = 20;

	garis(); namaku("Oi", umur); garis();
}
