#include<iostream>
using namespace std;

struct universitas{
	string prodi, rektor;
	int niu;
};

int main(){
	universitas u[10];
	for (int a=0; a<2; a++){
		cout<<"niu "; cin>>u[a].niu;
		cout<<"Prodi "; cin>>u[a].prodi;
		cout<<"rektor "; cin>>u[a].rektor;
	}
	
	for (int a=0; a<2; a++){
		cout<<"\nNiu: "<<u[a].niu<<endl;
		cout<<"Prodi: "<<u[a].prodi<<endl;
		cout<<"Rektor: "<<u[a].rektor<<endl;
	}
}
