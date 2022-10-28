#include <iostream>
using namespace std;

int main(){
	const int Baris = 3, Kolom = 4;
	int A[Baris][Kolom]={{3,4,8,0},{3,9,2,1},{6,3,0,2}};
	
	for (int c=0; c<Baris; c++){
		for (int k=0; k<Kolom; k++){
			cout<<A[c][k]<<" ";
		}
		cout << endl;
	}
}


