#include<iostream>

using namespace std;

int main(){
	float radius;
	float  diameter;
	float  circumferences; 
	float area;
	

	
	
	// get radius from user;
	   cout << "PLease Enter Radius:";
	   cin >> radius;
	   cout << endl;
	   
	   	diameter = radius * 2;
	    circumferences = radius * 2 * 3.142;
	    area = radius * radius * 3.142;
	   
	   //print Radius 
	   cout << "Radius Value ";
	   cout << radius;
	   cout << endl;
	   
	   //calculate Circumference
	   cout << "circumferences is ";
	   cout << circumferences;
	   cout << endl;
	   
	   //area of Circle 
	   cout << "Area of circle is  ";
	   cout << area;
	   cout << endl;
	   
	return 0;
} 

