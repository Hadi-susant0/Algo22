#include<iostream>
using namespace std;

string  status(int nilai){
	string s;
	if(nilai<=50){
		s="Gagal";
	} else {
		s="Lulus";
	}
	return s;
}

int main(){
	cout<<status(60);
}
