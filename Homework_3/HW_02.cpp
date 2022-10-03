//=========================================================================
//Name: Justin Schley
//Date: 2022-10-02
//Desc: Simple Calculator With Interactive Selections
//=========================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int selection;
    double firstnum;
    double secondnum;
    bool progfail = false;

    cout << "What would you like to do?" << endl;
    cout << "1.       Add 2 numbers" << endl;
    cout << "2.       Subtract 2 numbers" << endl;
    cout << "3.       Multiply 2 numbers" << endl;
    cout << "4.       Divide 2 numbers" << endl;
    cout << "Please enter your selection: ";
    cin >> selection;

    //==============
    //Error Checking
    //==============

    if (selection != 1 && selection != 2 && selection != 3 && selection != 4)
    {
        progfail = true;
        cout << "You broke my program. You needed to insert a number between 1 and 4." << endl;
    }

    if (progfail == false)
    {
        if (selection == 1 || selection == 2 || selection == 3 || selection == 4)
        {
            cout << endl << "Enter the first number: ";
            cin >> firstnum;
            cout << "Enter the second number: ";
            cin >> secondnum;
            cout << endl << "You chose to perform the following operation:" << endl;
            if (secondnum == 0)
            {
                progfail = true;
                cout << "You are trying to break my program. You cannot divide by 0." << endl;
            }
        }
    }

    //==============
    //Main Operation
    //==============

    if (progfail == false)
    {
        if (selection == 1)
        {
            cout << firstnum << " + " << secondnum << " = " << firstnum + secondnum << endl;
        }
        if (selection == 2)
        {
            cout << firstnum << " + " << secondnum << " = " << firstnum - secondnum << endl;
        }
        if (selection == 3)
        {
            cout << firstnum << " + " << secondnum << " = " << firstnum * secondnum << endl;
        }
        if (selection == 4)
        {
            cout << firstnum << " + " << secondnum << " = " << firstnum / secondnum << endl;
        }
        cout << "Thanks for using the program. Bye" << endl;
    }
}