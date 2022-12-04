#include <iostream>
#include <fstream>
using namespace std;

struct dataPelanggan{
	char noKTP;
	string nama;
	int rekening[3];
	int pin[3];
};

int main(){
	dataPelanggan pel;
	
	ofstream Pin("pin.txt");
	
	cout<<"Masukkan Pin Anda"; cin>>pel.pin;

	Pin << pel.pin;
	}
  
 	Pin.close();
 	
 	string myText;

	// Read from the text file
	ifstream MyReadFile("filename.txt");

	// Use a while loop together with the getline() function to read the file line by line
	while (getline (MyReadFile, myText)) {
		  
  	if(nama == myText && pin == Pin){
  		cout<<"Benar";
  	} else {
  		cout<<"Salah";
  	}
}

// Close the file
MyReadFile.close();
}
