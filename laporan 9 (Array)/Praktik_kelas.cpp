#include <iostream>
using namespace std;

int main(){
	int umur[5], total=0, rerata;
	
	for ( int a=0; a<5; a++){
		cout<<"Masukkan umur : "; cin>>umur[a];
		total = total + umur[a];
	}
	rerata = total / 5;
	cout<<"Rata-rata umur: "<< rerata;
	
	return 0;
}
