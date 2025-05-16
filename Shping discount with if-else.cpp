// Shoping Disount Conditions

#include<iostream>

using namespace std;
int main(){
	int bill;
	int discount;
	
	
	cout << "write shopping bill   ";
	cin >> bill;
	cout << endl;
	
	
	cout << "Shping bill is = ";
	cout << bill;
	cout << endl;
	
	if(bill > 0 && bill <= 5000){
		discount = 10;
		cout << "discount is ";
		cout << discount;
		cout << "%";
		cout << endl;
	}else if(bill > 5000 && bill <= 10000 ){
			discount = 20;
		cout << "discount is ";
		cout << discount;
		cout << "%";
		cout << endl;
	}else if(bill > 10000 && bill <= 30000 ){
		discount = 30;
		cout << "discount is ";
		cout << discount;
		cout << "%";
		cout << endl;
	}else{
		discount = 0;
		cout << "No discount";
		cout << discount;
		cout << "%";
		cout << endl;
	}
	
}
