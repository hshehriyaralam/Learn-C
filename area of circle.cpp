#include<iostream>

using namespace std;

int main(){
	float radius;
	float  diameter;
	float  circumferences; 
	float area;
	
	diameter = radius * 2;
	circumferences = radius * 2 * 3.142;
	area = radius * radius * 3.142;
	
	
	// get radius from user;
	   cout << "PLease Enter Radius:";
	   cin >> radius;
	   cout << endl;
	   
	   //print Radius 
	   cout << "Radius Value ";
	   cout << radius;
	   cout << endl;
	   
	return 0;
} 

