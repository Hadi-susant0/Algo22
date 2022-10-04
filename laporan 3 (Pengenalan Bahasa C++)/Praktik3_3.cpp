#include <iostream>
using namespace std;

#define tinggi 10
#define garis "______________________________"

int main()
	{
		const double phi = 3.14;
		double vol,r;
		
		cout<<"Program Mencari Volume Kerucut"<<endl;
		cout<<garis<<endl;
		
		cout<<"Masukan Jari-jari : "; cin>>r;
		
		vol = (phi * r * r * tinggi) / 3;
		
		cout<<"Volume Kerucut adalah " <<vol;
		return 0;
	}
