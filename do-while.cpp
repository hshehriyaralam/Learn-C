// do while loop
#include<iostream>
using namespace std;
int main(){
	int trynum;
	char raza;
	
	
	trynum = 0;
	
	do{
		cout << "Please Enter value from a to z = ";
		cin >> raza; 
		
		if(raza =='z'){
			cout << "Contgradulations";
			trynum = 5;
		}else{
			trynum = trynum + 1;
	};
		
	}while(trynum <= 5);
	
	return 0;
}
