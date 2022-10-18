#include <iostream>
using namespace std;

int main() {
	int Fahren, celcius;
	
	cout<<"Masukkan Suhu fahrenheit:"; cin>>Fahren;
	celcius = (Fahren-32)*5/9;
	cout<<"Suhu celcius adalah "<<celcius;
}
