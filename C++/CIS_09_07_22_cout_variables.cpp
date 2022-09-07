//=========================
//Author: Justin Schley
//Date:   09-07-2022
//Description: cout and veriable definitions
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
    cout << "Hello this is a test.\n" << "This is another test.";

    return 0;
}