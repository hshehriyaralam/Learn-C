// WHile Loop

#include<iostream>
using namespace std;

int main(){
	int num;
	int sum;
	
	num = 1;
	sum = 0;
	
	//while loop
	while(sum <= 1000){
		sum = sum + num;
		num++;
	}
	
	cout << "Sum Value ";
	cout << sum;
}
