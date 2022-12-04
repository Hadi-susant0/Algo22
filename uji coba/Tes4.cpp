#include <iostream>
#include <fstream>
using namespace std;

struct dataPelanggan{
	string noKTP;
	string nama;
	int rekening[3];
	string pin;
};

int main() {
	dataPelanggan pel;
	
    // Create and open a text file
    ofstream MyFile("filename.txt");
    ofstream MyPin("pin.txt");
  
    cout<<"Masukkan Nama Anda: "; cin>>pel.nama;
    cout<<"Masukkan Pin Anda: "; cin>>pel.pin;

    // Write to the file
    MyFile << pel.nama;
    MyPin << pel.pin;

    // Close the file
    MyFile.close();
    MyPin.close();
  
    // Create a text string, which is used to output the text file
    string myText, myPin, nama, pin;
    
    cout<<endl;
    cout<<"Masukkan Nama Anda: "; cin>>nama;
    cout<<"Masukkan Pin Anda: "; cin>>pin;

    // Read from the text file
    ifstream MyReadFile("filename.txt");
    ifstream ReadPin("pin.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText), getline (ReadPin, myPin)) {
    // Output the text from the file
    	if(nama == myText && pin == myPin){
			cout<<"Benar";
    	} else {
  	    	cout<<"Salah";
    	}
    }
  
	//  cout<<endl;
	//  
	//  while (getline (ReadPin, myText)) {
	//  // Output the text from the file
	//    cout << myText;
	//  }

    // Close the file
    MyReadFile.close();
    ReadPin.close();
}
