//=========================
//Author: Justin Schley
//Date:   09-07-2022
//Description: cout and variable definitions
//=========================



#include <iostream>
using namespace std;

int main()
{
    //========================================================
    //These two lines will be displayed on two different lines
    //========================================================
    // cout << "Hello this is a test\n";
    // cout << "This is another test";

    //========================================================
    //These two lines will not have a space in between them
    //========================================================
    // cout << "testing again";
    // cout << "another test";

    //========================================================
    //These will both print together on the same line (combining two strings)
    //========================================================
    // cout << "Hello this is a test. " << "This is another test.";

    //========================================================
    //looking at variables
    //========================================================    

    //This is a variable definition. 
    //int number;

    //This is a variable assignment. This gives a value to the defined RAM address.
    //number = 5;

    //output a string literal and the value stored in the variable num

    //cout << "number = " << number << endl;

    //reassignment to the variable number

    //number = 99;

    //cout << "number = " << number << endl;

    //Always declare variable before calling
    int number = 25;
    cout << "number = " << number << endl;
    
    int anotherNumber = 25;
    cout << "anotherNumber = " << anotherNumber << endl;

    //largest values for int
    int maxNum = 2147483647;
    cout << maxNum << endl;
    
    //higher than largest int val
    int maxNum2 = 2147483648;
    cout << maxNum2 << endl;




    return 0;
}