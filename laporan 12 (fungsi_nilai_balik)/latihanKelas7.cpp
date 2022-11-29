#include<iostream>
using namespace std;

string kata="Uvers";

string ab (){
	string kata = "Keren";
	return kata;
}

int main(){
	cout<<"Ini dari fungsi : "<<ab()<<endl;
	cout<<"Ini tanpa fungsi: "<<kata<<endl;
	kata="Yodi";
	cout<<"Ini dari fungsi: "<<ab()<<endl;
	cout<<"Ini tanpa fungsi: "<<kata<<endl;
}
