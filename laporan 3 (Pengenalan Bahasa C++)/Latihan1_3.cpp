#include <iostream>
using namespace std;

#define garis "=============================="

int main()
	{
		const double phi = 3.14;
		double vol,r,T;
		
		cout<<"Program Mencari Volume Kerucut"<<endl;
		cout<<garis<<endl;
		
		cout<<"Masukan Jari-jari : "; cin>>r;
		cout<<"Masukan Tinggi : "; cin>>T;
		
		vol = (phi * r * r * T) / 3;
		
		cout<<garis<<endl;
		cout<<"Volume Kerucut adalah " <<vol<<endl;
		cout<<garis<<endl;
		return 0;
	}
