#include <iostream>
#include <string>
using namespace std;

int main()
{

    // int ascii;
    // char letter;

    // cout << "Enter a letter: ";
    // cin >> letter;

    // ascii = int(letter);    //converts char into int

    // cout << "Letter: " << letter << endl;
    // cout <<  "ASCII: " << ascii << endl;

    // int num1;
    // int num2;
    // double sol;

    // cout << "Enter a number: " << endl;
    // cin >> num1;
    // cout << "Enter another number: " << endl;
    // cin >> num2;

    // sol = double(num1) / double(num2); // only converts the variables to doubles for just this line

    // cout << num1 << " / " << num2 << " = " << sol << endl;

    // incrementing

    // int sum = 10;
    
    // sum = sum + 1;
    // sum += 1;
    // sum ++;

    // all the same way to increment
    // can also use other signs to devide, multiply, etc.

    // For formatting, iomanip header file is required. #include <iomanip>
    // setw(x); used to reserve width of x characters in output(program 3-13 in book)
    // fixed
    // showpoint
    // setprecision(x)
    // left
    // right

    //best way to get string input is to use getline since cin ignores any whitespace characters
    //getline requires header for string
    string fullname;
    
    cout << "enter your full name (space between first and last name): " << endl;
    getline(cin, fullname);
    cout << fullname << endl;

    //mixing cin and cin.get in one program can cause input errors that are hard to detect. cin.get receives \n if cin is used beforehand
    //cin.ignore() - skip unneeded characters that are still in buffer
    //cin.ignore(10, \n) skip next 10 characters OR until a new line

    //





}