#include<iostream>
using namespace std;

string ket(int harga){
	string diskon;
	
		if(harga>1000000){
		diskon="Anda mendapatkan diskon sebesar 15% dan baju gratis";
	} else if(harga>=100000 && harga<=1000000){
		diskon="Anda mendapatakan diskon sebesar 5%";		
	}else {
		diskon="Maaf, Anda tidak mendapatakan bonus";
	}
	
	return diskon;
}

int bonus(int harga){
	string diskon;
	int nilai;
	
	if(harga>1000000){
		nilai=harga-(harga*15/100);
	} else if(harga>=100000 && harga<=1000000){
		nilai=harga-(harga*5/100);		
	}else {
		nilai=harga+0;
	}

	return nilai;
}

int main(){
	int harga;

	cout<<"Masukkan harga: ";cin>>harga;
	cout<<ket(harga)<<"\nHarga belanjaan anda adalah "<<bonus(harga);
}
