#include <iostream>
using namespace std;

int main()
{
    /*
    switch statements
    can be used like if/else if statements
    only works with ints or chars
    breaks can be used in switches. If not used, it can fall through and complete all the other statements after the one chosen
    default is optional but recommended (like an else statement)
    */

    char choice;
    cout << "enter a letter: " << endl;
    cin >> choice;
    if(choice >= 'A' && choice <= 'Z')
    {
    //do nothing
    }

    else if(choice >= 'a' && choice <= 'z')
    {
        //cout << choice << " ->";
        choice = choice - 32;
        //cout << choice << endl;
    }
    cout << choice << endl;
            
//     }





    
//     switch (choice)
//     {
//         case 'A': cout << "you entered A" << endl;
//             break;
//         case 'B': cout << "You entered B" << endl;
//             break;
//         case 'C': cout << "you entered C" << endl;
//             break;
//         default: cout << "You did not enter a, b, c, or A, B, or C.";
//     }
   


    // //variable scoping

    // int j = 10;
    // cout << j << endl;

    // if(j == 10)
    // {
    //     int j = 90; //this j is different from the original j
    //     cout << j << endl;
    // }

    // cout << j << endl;

    // //this will display 10, 90, 10 due to creating a duplicate int. The j 90 only exists inside of the if statement.







}