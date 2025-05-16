// Switch Statements
#include<iostream>
using namespace std;
int main(){
	char grade;
	cout << "Please enter grade  ";
	cin >> grade;
	
	switch(grade){
		case   'a':
		cout<<"Excellent";
		break;
		 
		case  'b':
		cout<<"very good";
		break;
		
		case  'c':
		cout<<"good";
		break;
		
		case 'd':
		cout<<"poor";
		break;
		
		case 'f':
		cout<<"fail";
		break;
	};
	return 0;
}
