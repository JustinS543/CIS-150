#include <iostream>
using namespace std;

int main()
{

    int charcount;
    string word;
    bool endgame = false;
    bool valin = false;
    string run;
       
    while(endgame == false)
    {
        valin = false;

        if(endgame == false)
        {
            cout << "Enter any size word: ";
            cin >> word;
        
            for(charcount = 0; charcount < word.length(); charcount++)
            {
                if(word.at(charcount) == 'A' || word.at(charcount) == 'E' || word.at(charcount) == 'I' || word.at(charcount) == 'O' || word.at(charcount) == 'U')
                {
                word.at(charcount) = '-';
                }
            }
        }

        if(endgame == false)
        {
        cout << word << endl;
        cout << "Run again: ";
        }
        
        while(valin == false && endgame == false)
        {
            cin >> run;

            if(run == "Y" || run == "y")
            {
                valin = true;
            }
            else if(run == "N" || run == "n")
            {
                endgame = true;
                cout << "bye" << endl;
            }
            else
            {
                cout << "invalid input. Try again: " << endl;
            }
        }

        if(endgame == false)
        {
            cout << "Enter any size word: ";
            cin >> word;

            for(charcount = 0; charcount < word.length(); charcount++)
            {
                if(word.at(charcount) == 'a' || word.at(charcount) == 'e' || word.at(charcount) == 'i' || word.at(charcount) == 'o' || word.at(charcount) == 'u')
                {
                word.at(charcount) = '-';
                }
            }

            cout << word << endl;
            cout << "Run again: ";
            valin = false;
            
            while(valin == false && endgame == false)
            {
                cin >> run;
                if(run == "Y" || run == "y")
                {
                    valin = true;
                }
                else if(run == "N" || run == "n")
                {
                    endgame = true;
                    cout << "bye" << endl;
                }
                else
                {
                    cout << "invalid input. Try again: ";
                }
            }
        }
    }
}