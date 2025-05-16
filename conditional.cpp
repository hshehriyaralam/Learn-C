#include<iostream>

using namespace std;


int main(){
	int Ahmad;
	int Mohsin;
	
	
	cout << "Enter Ahmad age ";
	cin >> Ahmad;
	cout << endl;
	
	cout << "Enter Mohsin age ";
	cin >> Mohsin;
	cout << endl;
	
	cout << "Ahmad age is = ";
	cout << Ahmad;
	cout << endl;
	
	cout << "Mohsin age is = ";
	cout << Mohsin;
	cout << endl;
	
	if(Mohsin > Ahmad ){
		cout << "Mohsin is Older than Ahmad";
	}else{
		cout << "Ahmad is Older than Mohsin";
	}
	
	
	
	return 0;
}
