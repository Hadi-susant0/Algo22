#include <iostream>
using namespace std;

int main(){
	int b, umur[b], total=0, rerata;
	
	cout<<"Ingin memasukkan berapa data"; cin>>b;
	
	for ( int a=0; a<b; a++){
		cout<<"Masukkan umur : "; cin>>umur[a];
		total = total + umur[a];
	}
	rerata = total / 10;
	cout<<"Rata-rata umur: "<< rerata;
	
	return 0;
}
