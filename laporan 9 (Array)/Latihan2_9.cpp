#include <iostream>
using namespace std;

int main(){
	int a[3][4], b[3][4], d[3][4];
	
	cout<<"~~Aplikasi penjumlahan matriks~~"<<endl;
	cout<<"================================"<<endl;
	
	for (int c=0; c<3; c++){
		for (int k=0; k<4; k++){
			cout<<"Masukkan nilai matriks A ("<<c+1<<"X"<<k+1<<") : "; cin>>a[c][k];
		}
	}
	
	for (int c=0; c<3; c++){
		for (int k=0; k<4; k++){
			cout<<"Masukkan nilai matriks B ("<<c+1<<"X"<<k+1<<") : "; cin>>b[c][k];
		}
	}
	
	cout<<"============================="<<endl;
	cout<<"Perjumlahan Matriksnya adalah "<<endl;
	
	for (int c=0; c<3; c++){
		for (int k=0; k<4; k++){
			
			d[c][k] = a[c][k] + b[c][k];
			cout << d[c][k]<<" ";
		}
		cout<<endl;
	}
}
