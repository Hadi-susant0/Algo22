#include <iostream>
using namespace std;

int main(){
	int total_belanja;
	char member;
	cout<<"Masukkan total belanja: "; cin >> total_belanja;
	cout<<"Apakah anda member? (y/t): "; cin>>member;
	if (total_belanja > 1000000){
		if (member == 'y' || member == 'Y'){
			cout<<"Potongan 35000"<<endl;
		} else {
			cout<<"Potongan 20000"<<endl;
		}
	} else {
		cout<<"Potongan 0"<<endl;
	}
}
