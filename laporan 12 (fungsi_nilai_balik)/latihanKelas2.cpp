#include<iostream>
using namespace std;

string nama(string ndepan, string nbelakang){
	return ndepan+" "+nbelakang;
}

int main(){
	string ndepan, nbelakang;
	cout<<"Masukkan nama depan: ";cin>>ndepan;
	cout<<"Masukkan nama belakang: ";cin>>nbelakang;
	cout<<nama(ndepan,nbelakang);
}
