#include<iostream>
using namespace std;

int tambah (int a, int b){
	return a+b;
}
int tambah(int a, int b, int c){
	return a+b+c;
}

int main(){
	cout<<tambah(2,5)<<endl;
	cout<<tambah(2,3,5);
}
