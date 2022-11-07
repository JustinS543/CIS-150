#include <iostream>
#include <string>
using namespace std;



void displayHello()
{
    cout << "Hello" << endl;
}

void displayGreeting(string name)
{
    cout << "Greetings " << name << endl;
}

string getName() //does not accept anything, only returning name to main
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    return name; //returns the name variable to main
}

int main()
{
    string name;
    displayHello();
    name = getName();
    displayGreeting(name);
}