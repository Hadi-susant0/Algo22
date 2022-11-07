#include <iostream>
using namespace std;

int main(){
	char Variabel[5];
	char Angka[5] = {'H','A','D','I','N'};
	
	cout<<"Masukkan kata"; cin>>Variabel;
	cout<<Variabel<<endl;
	cout<<Variabel[0]<<endl;
	cout<<Variabel[1]<<endl;
	cout<<Variabel[2]<<endl;
	cout<<Variabel[3]<<endl;
	cout<<Variabel[4]<<endl;
	cout<<Variabel[5]<<endl;
	cout<<Variabel[6]<<endl;
	cout<<Variabel[7]<<endl;
	cout<<Variabel[8]<<endl;
	cout<<"aku "<<Variabel[9]<<endl;
	
	for(int a=0; a<5; a++){
		cout<<Angka[a];
	}
}
