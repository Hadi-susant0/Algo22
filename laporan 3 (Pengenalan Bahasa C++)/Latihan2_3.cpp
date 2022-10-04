#include <iostream>
using namespace std;

int main()
{
	string a, BMI, gender;
	double b,c, berat, B_Pria, B_Wanita, Out;
	
	cout<<"Aplikasi Mencari Berat Badan Ideal"<<endl;
	cout<<"=================================="<<endl;
	
	cout<<"Masukan Nama : "; cin>>a;
	getline(cin,a);
	cout<<"Masukan Jenis Kelamin (Pria,Wanita) : "; cin>>gender;
	cout<<"Masukan Berat badan (dalam kilogram): "; cin>>b;
	cout<<"Masukan Tinggi badan (dalam meter): "; cin>>c;
	cout<<"==================================================================="<<endl;
	
	berat = b / (c * c);
	
	if(berat < 18.5) BMI= "Kurang";
	else
	
	if(berat <= 25.0) BMI= "Normal";
	else
	
	if(berat > 25.0) BMI= "Kelebihan";
	
	B_Pria = ((c * 100)-100) - ((c * 100)-100) * 10/100;
	B_Wanita = ((c * 100)-100) - ((c * 100)-100) * 15/100;
	
	if(gender == "Pria" || gender == "pria" || gender == "Laki-laki" || gender == "laki-laki") Out = B_Pria;
	else
	Out = B_Wanita;
	 
	
	cout<<"Berat badanmu "<<BMI<<endl;
	if (BMI == "Normal") cout<<"";
	else
	
	if(BMI == "Kurang") cout<<"Ayo tambah nutrisimu lagi, berat badan idealmu dikisaran "<<Out<<" kg."<<endl;
	else
	
	if(BMI == "Kelebihan") cout<<"SEMANGAT!!! Kamu pasti bisa, berat badan idealmu dikisaran "<<Out<< " Kg."<<endl;
	cout<<"==================================================================="<<endl;
		
	return 0;
} 

