#include <iostream>
using namespace std;

int main(){
	int i = 0;
	do{
		cout << i << " "; i++;
		if (i == 7){
		break;
		}
	}	
	while ( i < 10 );
	
	int a = 0;
	while (a < 10){ a++;
		if (a % 2 == 0){
		continue;
	}
		cout << a << " ";
	}
	return 0;
}


