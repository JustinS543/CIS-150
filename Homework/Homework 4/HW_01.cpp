#include <iostream>
using namespace std;

int main()
{
    string word;
    bool endgame = false;
    string dashword;
    int guesses = 1;
    int guessesleft = 5;
    string letguess;
    string wordguess;
    int guessright;
    char lowerletter;
    bool valid = false;
    bool alreadyguessed = false;

    cout << "insert a word for player two to guess: ";
    getline(cin, word);


    //==================================================
    //creating dash word
    //==================================================

    dashword = word;
    system("clear");

    for(int i = 0; i < word.length(); i++)
    {
        dashword.at(i) = '-';
    }

    for(int i = 0; i < word.length(); i++)
    {
        lowerletter = word.at(i);
        
        if(lowerletter >= 'A' && lowerletter <= 'Z')
        {
            lowerletter = lowerletter + 32;
            word.at(i) = lowerletter;
        }
    }

    //==================================================
    //main game
    //==================================================    

    for(int i = 0; i < 5 && endgame == false; i++)
    {
        
        cout << dashword << endl;
        cout << "You have " << guessesleft << " guesses left. Guess a letter: ";
        getline(cin, letguess);

        valid = false;

        while(valid == false)
        {

            if(letguess.length() == 1)
            {
                valid = true;
                lowerletter = letguess.at(0);

                if(lowerletter >= 'A' && lowerletter <= 'Z')
                {
                    lowerletter = lowerletter + 32;
                    letguess.at(i) = lowerletter;
                }

                guessright = 0;

                for(int j = 0; j < word.length(); j++)
                {
                    if(word.at(j) == letguess.at(0) && guessright < 1)
                    {
                        dashword.at(j) = word.at(j);
                        guessright++;
                        cout << "You guessed the letters at position " << j;
                        valid = true;
                    }

                    else if(word.at(j) == letguess.at(0) && guessright >= 1)
                    {
                        dashword.at(j) = word.at(j);
                        guessright++;
                        cout << " and " << j;
                        valid = true;
                    }
                }

                if(guessright > 0)
                {
                    cout << " correct." << endl;
                }

                cout << endl << dashword << endl;

                if(dashword == word)
                {
                    endgame = true;
                    alreadyguessed = true;
                    cout << "You win! you guessed the word in " << guesses << " guesses!" << endl;
                }
            }

            else
            {
                cout << "You did not enter a letter! Try again: ";
                getline(cin, letguess); 
            }
        }

        if(endgame == false)
        {
        cout << "Take a guess at the word: ";
        getline(cin, wordguess);
        }

        if(wordguess == word && alreadyguessed == false)
        {
            endgame = true;
            cout << "You win! You guessed the word in " << guesses << " guesses!" << endl;
        }

        guesses++;
        guessesleft--;
    }

    if(endgame == false)
    {
        cout << "Sorry, you lose." << endl;
    }
}