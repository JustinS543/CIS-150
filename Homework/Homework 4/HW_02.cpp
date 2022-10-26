#include <iostream>
using namespace std;

int main()
{

    string sentence;
    bool endgame = false;
    string select;
    int senmid;
    char letter;
    string newsent;
    int senlen;

    cout << "Welcome to my program. Enter a sentence and select one of the options below." << endl;
    cout << "Enter -999 to exit the program." << endl;
    cout << "============================================================================" << endl;
    cout << "1. Display the middle character if there is one." << endl;
    cout << "2. Convert to uppercase." << endl;
    cout << "3. Convert to lowercase" << endl;
    cout << "4. Display backwards." << endl;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    

    while(endgame == false)
    {
        cout << endl << "Selection: ";
        cin >> select;

        if(select == "1")
        {
            cout << "    MIDDLE" << endl;
            cout << "==============" << endl;

            if(sentence.length() % 2 != 0)
            {
                senmid = sentence.length() / 2;
                cout << "The middle character is: " << sentence.at(senmid);
            }
            else if(sentence.length() % 2 == 0)
            {
                cout << "There is no middle." << endl;
            }
        }

        else if(select == "2")
        {
            cout << "   UPPERCASE" << endl;
            cout << "==============" << endl;

            for(int i = 0; i < sentence.length(); i++)
            {
                letter = sentence.at(i);
                
                if(letter >= 'A' && letter <= 'Z')
                {
                    //do nothing
                }

                else if(letter >= 'a' && letter <= 'z')
                {
                    letter = letter - 32;
                    sentence.at(i) = letter;
                }

                else if(letter = ' ')
                {
                    //do nothing
                }
            }

            cout << sentence;
        }

        else if(select == "3")
        {
            cout << "   LOWERCASE" << endl;
            cout << "==============" << endl;

            for(int i = 0; i < sentence.length(); i++)
            {
                letter = sentence.at(i);
                
                if(letter >= 'A' && letter <= 'Z')
                {
                    letter = letter + 32;
                    sentence.at(i) = letter;
                }

                else if(letter >= 'a' && letter <= 'z')
                {
                    //do nothing
                }

                else if(letter = ' ')
                {
                    //do nothing
                }
            }

            cout << sentence;
        }

        else if(select == "4")
        {
            cout << "   BACKWARDS" << endl;
            cout << "==============" << endl;

            newsent = sentence;

            for(int i = 0; i < sentence.length(); i++)
            {
                
                senlen = sentence.length() - 1;
                newsent.at(senlen - i) = sentence.at(i);
            }

            cout << newsent;
        }

        else if(select == "-999")
        {
            endgame = true;
            cout << "Thanks for using my program!" << endl;
        }

        else
        {
            cout << "Invalid input. Try again." << endl;
        }

    }

}