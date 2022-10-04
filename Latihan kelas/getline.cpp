#include <iostream>
using namespace std;

int main(){
	int a,b; float c;  string e;
	cout<<"Masukkan nama: "; getline(cin,e);
	cout<<"Masukkan nilai a: ";cin>>a;
	cout<<"Masukkan nilai b: ";cin>>b;
	c = a % b;
	cout<<"Hasil modulus "<<c<<endl;
}
