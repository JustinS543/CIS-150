#include <iostream>
using namespace std;

int main()
{

    /*do while is good option for menu driven programs
    not used a lot
    */

   //breaks not needed for while loops
   //i, ii, j, jj used as variables for iterations of loops
   //increments/counters always start at zero
   //

    // int i = 0;
    // string name;

    // cout << "Enter your name: ";
    // getline(cin, name);
    
    
    // while(i < 5)
    // {
    //     cout << name << endl;
    //     i++;
    // }

    //input validation

    //WHile user enters data, loop back around if they enter bad data

    int number;
    int i = 0;
    int startingnumber = 1;

    cout << "Enter a number: ";
    cin >> number;

    while(number > 99 || number < 2)
    {
        cout << "Try again." << endl;
        cin >> number;
    }

    while(i < number)
    {
        if(startingnumber % 10 != 0)
        {
            cout << startingnumber << ",";
            startingnumber++;
        }
        else if(startingnumber % 10 == 0)
        {
            cout << startingnumber << endl;
            startingnumber++;
        }
        i++;
    }












}