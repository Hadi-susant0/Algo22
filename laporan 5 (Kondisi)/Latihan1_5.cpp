#include <iostream>
using namespace std;

#define g "========================"

int main(){
	string Nama, h, p;
	float tgs, uts, uas, total;
	
	cout<<"Aplikasi penilaian akhir"<<endl;
	cout<<g<<endl;
	cout<<"Masukkan nama anda: ";getline(cin,Nama);
	cout<<"Nilai tugas: "; cin>>tgs;
	cout<<"Nilai UTS: "; cin>>uts;
	cout<<"Nilai UAS: "; cin>>uas;
	cout<<g<<endl;
	
	total = (tgs+uts+uas)/3;
	
	if(total <= 20) {h = "e"; p = "Sangat kurang";
	} else
	
	if(total <= 40) {h = "d"; p = "kurang";
	} else
	
	if(total <= 60) {h = "c"; p = "cukup";
	} else
	
	if(total <= 80) {h = "b"; p = "baik";
	} else
	
	if(total <= 100) {h = "a"; p = "Sangat baik";
	}
	
	cout<<"Selamat "<<Nama<<endl;
	cout<<"Nilai anda (tugas+UTS+UAS)/3: "<<total<<endl;
	cout<<"Nilai Huruf: "<<h<<endl;
	cout<<"Predikat: "<<p<<endl;
	
	return 0;
}


































