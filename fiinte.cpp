#include "fiinte.h"
#include <string>
#include <iostream>

using namespace std;

fiinte::fiinte() {

	cout << "Fiinta universului creata!" << endl;

}

fiinte::fiinte(string name_select, int age_select, double height_select) {
	
	name = name_select;
	age = age_select;
	height = height_select;

	cout << "Fiinta universului creata!" << endl;
	cout << name_select << " are " << age_select << " si are inaltimea " << height_select << " metri" << endl;
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

}
