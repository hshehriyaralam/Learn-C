#include<iostream>

using namespace std;


void swap(int &x, int &y); 

int main (){
	int a;
	int b;
	
	a = 10;
	b = 20;
	
	cout << "Before function calling A ";
	cout << a;
	cout << endl;
	
	
	cout << "Before Callig b";
	cout << b;
	cout << endl;
	
	swap(a,b);
	
	cout << "After function calling A ";
	cout << a;
	cout << endl;
	
	
	cout << "After Callig b";
	cout << b;
	cout << endl;
	
};

void swap (int &x, int &y){
	int temp;
	temp = x;
	x = y;
	y = temp;
	
	return;
	
}
