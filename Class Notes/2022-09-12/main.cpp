//==========================================================================
//Author: Justin Schley
//Date  : 9-12-22
//Desc  : output variables, concatentation, math operations, and user input
//==========================================================================

#include <iostream>
using namespace std;

int main()
{

    //=============================
    //Looking at char datatype
    //=============================

    // char letter = 'A';
    // int asciiValueOfLetter = letter;
    // cout << letter << endl;
    // cout << letter << " has an ascii value of: " << asciiValueOfLetter << endl;

    //=============================
    //Looking at string datatype
    //=============================

    // int age = 29;
    // string fName = "Shannon";
    // string lName = "Thomas";
    // int currentYear = 2022;
    // int yearBorn = currentYear - age;

    // cout << "Hello " << fName << " " << lName << "!" << endl;
    // cout << "You are " << age << " years old and born in " << yearBorn << "." << endl;

    //=============================
    //Basic User Input
    //=============================

    int favNum;
    string name;

    cout << "Enter your favorite number: ";
    cin >> favNum;
    cout << "Enter first name: ";
    cin >> name;
    cout << "Hello " << name << ", your favorite number is " << favNum << endl;

}