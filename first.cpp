#include <iostream>
#include <string>
#include "fiinte.h"
#include "ctype.h"

using namespace std;

bool search_for_digit(string &sample) {
	for(char c : sample) {
	
		if (isdigit(c)) {
			return false;
		}
		
	}
}



int main() {
	
	int date;
	bool swtch = true;
	fiinte OmRadu("radu", 25, 1.74);

	
	OmRadu.IsMale();
	while (swtch) {
		cout << "Type your name: " << endl;

		cin >> OmRadu.name;

		if (!search_for_digit(OmRadu.name)) {

			cout << "Re-enter your name, you have misspelled your name!" << endl;
		}
		else
		{
			swtch = false;
		} 
	}
	cout<<"Type the day when you applied for Uni: "<<endl;
	cin >> date;



	if (OmRadu.age<30 && date<18) {

		cout << "You are eligible for a Uni course! Congratss!!!!" << endl;
		OmRadu.Enroll_Uni();


	}
	else {
		cout<<"Sorry you cannot apply for this Uni course!"<<endl;
	}

	return 0;
}