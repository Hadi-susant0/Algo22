#include <iostream>
using namespace std;

int main(){
	int Bil = 10;
	
	while (Bil<=30){ Bil++;
		if(Bil%2==0){
			continue;
		} else if(Bil== 21||Bil==27){
			continue;
		} else {
			cout<<Bil<<endl;
		}
	}
}
