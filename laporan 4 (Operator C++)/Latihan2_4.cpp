#include <iostream>
using namespace std;

#define garis "========================================"

int main(){
	float UTS, UAS, NILAI;
	
	cout<<"Aplikasi menentukan kelulusan dari nilai"<<endl;
	cout<<garis<<endl;
	cout<<"Masukkan Nilai UTS Anda: "; cin>>UTS;
	cout<<"Masukkan Nilai UAS Anda: "; cin>>UAS;
	cout<<garis<<endl;
	
	NILAI = (UAS+UTS)/2
	
	(NILAI >= 60) ? (cout<<"Anda Tidak Lulus, Coba lagi") : (cout<<"Selamat, Anda Lulus.") ;
	
	return 0 ;
}
