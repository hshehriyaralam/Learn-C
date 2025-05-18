// functions

#include<iostream>
using namespace std;
	
int additionFunction(int a, int b) {
	return a+b;
}	
	
int main(){
	int a;
	int b;
	
	cout << "enter first number : ";
	cin >> a;
	
	cout << "enter 2nd number : ";
	cin >> b;
	
	cout << "REsult : ";
	cout << additionFunction (a,b);
	return 0;
};


