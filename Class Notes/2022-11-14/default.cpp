#include <iostream>
#include <string>
using namespace std;

void getUserInfo(string &, string &, int &);

int main()
{
    string fname;
    string lname;
    int age;
    getUserInfo(fname, lname, age);
    cout << "Hello " << fname << " " << lname << " , you are " << age << " years old." << endl;
    
    /*

    static variables 

    static int statNum = 5;

    keeps their values in between function calls

    ==================================================

    passing variable values by reference (pointers)

    Passing by reference allows you to update variables without having to include a return statement

    example: void getDimensions(int &x)

    requires "&" before variable to pass by reference

    */
}

void getUserInfo(string &fname, string &lname, int &age)
{
    cout << "Enter your first name: ";
    cin >> fname;
    cout << "Enter your last name: ";
    cin >> lname;
    cout << "enter your age: ";
    cin >> age;
}