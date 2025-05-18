#include<iostream>
	
	
	
using namespace std;


void display (int marks[5]);

int main(){
	int marks[5] = {50,60,70,80,90};
	display (marks);
	
	
};

void display (int marks[5]){
	cout << "Display the student marks";
	
	for (int i; i < 5; i++){
		cout << "Student";
		cout << i + 1;
		cout << ":";
		cout << marks[i];
	}
}
