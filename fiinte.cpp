#include "fiinte.h"
#include <string>
#include <iostream>

using namespace std;

fiinte::fiinte() {
	
	cout << "Fiinta universului creata!" << endl;
}

fiinte::~fiinte() {

	cout << "Obiect eliminat!" << endl;
}

void fiinte::IsFemale() {
	
	gender = "female";

}

void fiinte::IsMale() {

	gender = "male";
}

void fiinte::Enroll_Uni() {

	cout<<"Application sent!"<<endl;
	cout << name << " are " << age << " si are inaltimea " << height <<" metri"<<endl;

}
