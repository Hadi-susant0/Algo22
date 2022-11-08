#include<iostream>
using namespace std;

void hitungLuasSegitiga(double alas, double tinggi){
	double luas = (alas *tinggi) / 2;
	cout << "Luas segitiga adalah: "<<luas<<endl;
}

int main(){
	hitungLuasSegitiga(10.5, 100.0);
	return 0;
}


