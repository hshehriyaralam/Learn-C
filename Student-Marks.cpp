// Student Averagae Marks


#include<iostream>

using namespace std;
int main(){
	int eng;
	int math;
	int cs;
	int phy;
	int urdu;
	int bio;
	int avearge;
	
	// get englihs marks
	cout << "Enter a eng marks :  ";
	cin >> eng;
	cout << endl;
	
	// get math marks
	cout << "Enter a math marks :  ";
	cin >> math;
	cout << endl;
	
	//get CS marks 
	cout << "Enter a cs marks :  ";
	cin >> cs;
	cout << endl;
	
	// get urdu marks
	cout << "Enter a urdu marks :  ";
	cin >> urdu;
	cout << endl;
	
	// get phy marks
	cout << "Enter a physics marks :  ";
	cin >> phy;
	cout << endl;
	
	
	//get bio marks
	cout << "Enter a bio marks :  ";
	cin >> bio;
	cout << endl;
	
	
	cout << "Eng Marks is = ";
	cout << eng;
	cout << endl;
	
	cout << "Math Marks is = ";
	cout << eng;
	cout << endl;
	
	cout << "CS marks is = ";
	cout << cs;
	cout << endl;
	
	cout << "urdu  marks is = ";
	cout << urdu;
	cout << endl;
	
	cout << "phy mark is = ";
	cout << phy;
	cout << endl;
	
	cout << "bio mark is = ";
	cout << urdu;
	cout << endl;
	
	
	avearge = eng + math + cs + urdu + phy + bio;
	cout <<  "Avearge Mark is ";
	cout << avearge;
	cout << endl;
	
	
	
	
	return 0;
}
