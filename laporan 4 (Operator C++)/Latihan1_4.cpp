#include <iostream>
using namespace std;

#define garis "========================================"

int main(){
	int Umur;
	
	cout<<"Aplikasi menentukan kedewasaan dari umur"<<endl;
	cout<<garis<<endl;
	cout<<"masukkan Umur anda: "; cin>>Umur;
	cout<<garis<<endl;
	(Umur > 17 ) ? (cout<<"Anda dewasa") : (cout<<"Anda belum dewasa") ;
	
	return 0 ;
}
