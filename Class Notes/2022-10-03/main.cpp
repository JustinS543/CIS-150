#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

    // //if/if/if vs if/else if/else if
    // //if the first letter is a - display good and replace letter with a dash
    // //if the first letter is a dash - display bad and replace letter with a

    // string word;
    // cout << "Enter a word:";
    // cin >> word;

    // if(word.at(0) == 'a' || word.at(0) == 'A')
    // {
    //     cout << "Good" << endl;
    //     word.at(0) = '-';
    // }
    // //since the first if changes the string to equal -, the second if runs. Must use else if.
    // else if(word.at(0) == '-')
    // {
    //     cout << "Bad" << endl;
    //     word.at(0) = 'a';
    // }
    // cout << word << endl;

    //ask the user to put in a word
    //if theres a middle character, display a middle character


    // string word;
    // char midchar;
    // int wordlength;
    // int divide;
    // int mod;
    
    

    // cout << "Enter word: ";
    // cin >> word;
    
    // wordlength = word.length();
    // divide = wordlength / 2;
    // mod = wordlength % 2;
    
    // if(mod == 1)
    // {
    //     midchar = word.at(divide);
    //     cout << "Middle Character: " << midchar << endl;
    // }
    // else
    // {
    //     cout << "This word does not have a middle character." << endl;
    // }

    //if(ch >= 'A' && ch <= 'Z')
    //testing for uppercase







    //switch statements

    char choice;

    cout << "enter A, B, or C: ";
    cin >> choice;
    //What happens if they enter lowercase?
    if(choice >= 'A' && choice <= 'Z')
    {
        //do nothing, choice is already upper.
    }

    else if(choice >= 'a' && choice <= 'z')
    {
        ////choice is lowercase, needs to be converted to uppercase.
        ////valid way to change choice to uppercase
        //choice = toupper(choice);

        //what if we can't use toupper?
        choice = choice - 32;
    }

    else
    {
        //invalid input
    }

    cout << choice << endl;
    



}