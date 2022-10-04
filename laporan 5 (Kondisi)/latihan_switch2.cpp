#include <iostream>
using namespace std;

int main(){
	int a;
	cout<<"Nilai a: "; cin>>a;
	switch (a){
		case 1 ... 5: cout<<"1-5"; break;
		case 6 ... 10: cout<<"6-9"; break;
		default: cout<<"bukan keduanya";
	}
}
