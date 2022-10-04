#include <iostream>
using namespace std;

int main(){
	int a;
	cout<<"Nilai a: "; cin>>a;
	if (a>=1 && a<=5){
		cout<<"1 sampai 5"<<endl;	
	} else if (a>=6 && a<=9){
		cout<<"6-9"<<endl;
	} else {
		cout<<"bukan keduanya";
	}
}
