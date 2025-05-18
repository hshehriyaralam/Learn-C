#include<iostream>

using namespace std;

int myFunction (int);


int main(){
	
	int a ;
	a = 10;
	
	cout << "The value of a in main funtions";
	cout << a; 
	cout << endl;
	
	
	cout << "The value of a in myFinction";
	cout << myFunction(a);
	cout << endl;
	
	
	return 0;
};

int myFunction ( int a){
	return a = 20;
}
