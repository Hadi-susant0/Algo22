#include<iostream>
using namespace std;

float kali (float a, float b){
	return a*b;
}
float lus3(float alas, float tinggi){
	return kali(alas,tinggi)/2;
}
int main(){
	cout<<lus3(5.0,10.5);
}
