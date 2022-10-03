#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string sword;
    string letterguess;
    string wordguess;
    char guesschar;
    char letter1;
    char letter2;
    char letter3;
    char letter4;
    char letter5;
    char wordguess1;
    char wordguess2;
    char wordguess3;
    char wordguess4;
    char wordguess5;
    bool endgame;
    string sworddash = "-----";
    int guessesleft = 5;
    int guesses = 1;

    //============================================
    //Word Intake
    //============================================

    cout << "Please enter a 5 letter word: ";
    cin >> sword;

    if(sword.length() == 5) //testing length and if successful will change each value to char
    {
        endgame = false;
        letter1 = tolower(sword.at(0));
        letter2 = tolower(sword.at(1));
        letter3 = tolower(sword.at(2));
        letter4 = tolower(sword.at(3));
        letter5 = tolower(sword.at(4));
    }
    
    if(sword.length() < 5)
    {
        endgame = true;
        cout << "Run the program again. The word to guess is too short." << endl;
    }

    if(sword.length() > 5)
    {
        endgame = true;
        cout << "Run the program again. The word to guess is too long." << endl;
    }

    //============================================
    //First letter guess
    //============================================
    
    if(endgame == false)
    {
        cout << sworddash << endl;
        cout << "Guess a letter: ";
        cin.ignore();
        getline(cin, letterguess);
        
        if(letterguess.length() == 1)
        {
            guesschar = tolower(letterguess.at(0)); //probably a better way somehow to avoid using a string
        
            if(guesschar == letter1)
            {
                sworddash.at(0) = guesschar;
                cout << "You guessed the first letter correct!" << endl;
            }
            if(guesschar == letter2)
            {
                sworddash.at(1) = guesschar;
                cout << "You guessed the second letter correct!" << endl;
            }
            if(guesschar == letter3)
            {
                sworddash.at(2) = guesschar;
                cout << "You guessed the third letter correct!" << endl;
            }
            if(guesschar == letter4)
            {
                sworddash.at(3) = guesschar;
                cout << "You guessed the fourth letter correct!" << endl;
            }
            if(guesschar == letter5)
            {
                sworddash.at(4) = guesschar;
                cout << "You guessed the fifth letter correct!" << endl;
            }
        }  
            
            
        if(letterguess.length() > 1)
        {
            endgame = true;
            cout << "Run the program again. You can only input one letter at a time." << endl;
        }
        if(letterguess == "")
        {
            endgame = true;    
            cout << "Run the program again. You did not insert a letter." << endl;
        }
    }

    // if(wordguess == "")
    //     {
    //         endgame = true;    
    //         cout << "Run the program again. You did not insert a word." << endl;
    //     }

    if(sworddash.at(0) == letter1)
    {
        if(sworddash.at(1) == letter2)
        {
            if(sworddash.at(2) == letter3)
            {
                if(sworddash.at(3) == letter4)
                {
                    if(sworddash.at(4) == letter5)
                    {
                        endgame = true;
                        cout << "You guessed the word correctly in " << guesses << " guess! You Win!" << endl;
                    }
                }
            }
        }
    }

    //============================================
    //Word Guess
    //============================================

    if(endgame == false)
    {
        cout << sworddash << endl;
        cout << "You have " << guessesleft << " guesses left. Take a guess at the word: ";
        cin.ignore();
        getline(cin, wordguess);
        
        if(wordguess.length() == 5)
        {
            wordguess1 = tolower(wordguess.at(0));
            wordguess2 = tolower(wordguess.at(1));
            wordguess3 = tolower(wordguess.at(2));
            wordguess4 = tolower(wordguess.at(3));
            wordguess5 = tolower(wordguess.at(4));

            if(wordguess1 == letter1)
            {
                if(wordguess2 == letter2)
                {
                    if(wordguess3 == letter3)
                    {
                        if(wordguess4 == letter4)
                        {
                            if(wordguess5 == letter5)
                            {
                                endgame = true;
                                cout << "You guessed the word correctly in " << guesses;
                                
                                if(guesses == 1)
                                {
                                    cout << " guess! You Win!" << endl;
                                }
                                if(guesses > 1)
                                {
                                    cout << " guesses! You Win!" << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if(endgame == false)
    {
    cout << endl << sworddash << endl;           
    guessesleft --;
    }

    //============================================
    //2nd letter guess
    //============================================
    
    if(endgame == false)
    {
        guesses ++;
        cout << "You have " << guessesleft << " guesses left. Guess a letter: ";
        cin.ignore();
        getline(cin, letterguess);
        
        if(letterguess.length() == 1)
        {
            guesschar = tolower(letterguess.at(0)); //probably a better way somehow to avoid using a string
        
            if(guesschar == letter1)
            {
                sworddash.at(0) = guesschar;
                cout << "You guessed the first letter correct!" << endl;
            }
            if(guesschar == letter2)
            {
                sworddash.at(1) = guesschar;
                cout << "You guessed the second letter correct!" << endl;
            }
            if(guesschar == letter3)
            {
                sworddash.at(2) = guesschar;
                cout << "You guessed the third letter correct!" << endl;
            }
            if(guesschar == letter4)
            {
                sworddash.at(3) = guesschar;
                cout << "You guessed the fourth letter correct!" << endl;
            }
            if(guesschar == letter5)
            {
                sworddash.at(4) = guesschar;
                cout << "You guessed the fifth letter correct!" << endl;
            }
        }

        if(letterguess.length() > 1)
        {
            endgame = true;
            cout << "Run the program again. You can only input one letter at a time." << endl;
        }

        if(letterguess == "")
        {
            endgame = true;    
            cout << "Run the program again. You did not insert a letter." << endl;
        }
    }

    if(endgame == false)
    {
        if(sworddash.at(0) == letter1)
        {
            if(sworddash.at(1) == letter2)
            {
                if(sworddash.at(2) == letter3)
                {
                    if(sworddash.at(3) == letter4)
                    {
                        if(sworddash.at(4) == letter5)
                        {
                            endgame = true;
                            cout << "You guessed the word correctly in " << guesses << " guesses! You Win!" << endl;
                        }
                    }
                }
            }
        }
    }

    //============================================
    //2nd Word Guess
    //============================================

    if(endgame == false)
    {
        cout << sworddash << endl;
        cout << "You have " << guessesleft << " guesses left. Take a guess at the word: ";
        cin >> wordguess;
                
        if (wordguess.length() == 5)
        {
            wordguess1 = tolower(wordguess.at(0));
            wordguess2 = tolower(wordguess.at(1));
            wordguess3 = tolower(wordguess.at(2));
            wordguess4 = tolower(wordguess.at(3));
            wordguess5 = tolower(wordguess.at(4));

            if(wordguess1 == letter1)
            {
                if(wordguess2 == letter2)
                {
                    if(wordguess3 == letter3)
                    {
                        if(wordguess4 == letter4)
                        {
                            if(wordguess5 == letter5)
                            {
                                endgame = true;
                                cout << "You guessed the word correctly in " << guesses;
                                if(guesses == 1)
                                {
                                    cout << " guess! You Win!" << endl;
                                }
                                if(guesses > 1)
                                {
                                    cout << " guesses! You Win!" << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if(endgame == false)
    {
        cout << endl << sworddash << endl;
        guessesleft --;
    }

    //============================================
    //3rd letter guess
    //============================================
    
    if(endgame == false)
    {
        guesses ++;
        cout << "You have " << guessesleft << " guesses left. Guess a letter: ";
        cin.ignore();
        getline(cin, letterguess);
        
        if(letterguess.length() == 1)
        {
            guesschar = tolower(letterguess.at(0)); //probably a better way somehow to avoid using a string
        }
            if(guesschar == letter1)
            {
                sworddash.at(0) = guesschar;
                cout << "You guessed the first letter correct!" << endl;
            }
            if(guesschar == letter2)
            {
                sworddash.at(1) = guesschar;
                cout << "You guessed the second letter correct!" << endl;
            }
            if(guesschar == letter3)
            {
                sworddash.at(2) = guesschar;
                cout << "You guessed the third letter correct!" << endl;
            }
            if(guesschar == letter4)
            {
                sworddash.at(3) = guesschar;
                cout << "You guessed the fourth letter correct!" << endl;
            }
            if(guesschar == letter5)
            {
                sworddash.at(4) = guesschar;
                cout << "You guessed the fifth letter correct!" << endl;
            }

            if(letterguess.length() > 1)
                {
                    endgame = true;
                    cout << "Run the program again. You can only input one letter at a time." << endl;
                }
            if(letterguess == "")
                {
                    endgame = true;    
                    cout << "Run the program again. You did not insert a letter." << endl;
                }
    }

    if(endgame == false)
    {
        if(sworddash.at(0) == letter1)
        {
            if(sworddash.at(1) == letter2)
            {
                if(sworddash.at(2) == letter3)
                {
                    if(sworddash.at(3) == letter4)
                    {
                        if(sworddash.at(4) == letter5)
                        {
                            endgame = true;
                            cout << "You guessed the word correctly in " << guesses << " guesses! You Win!" << endl;
                        }
                    }
                }
            }
        }
    }

    //============================================
    //3rd Word Guess
    //============================================

    if(endgame == false)
    {
        cout << sworddash << endl;
        
        cout << "You have " << guessesleft << " guesses left. Take a guess at the word: ";
        cin >> wordguess;
        
        if (wordguess.length() == 5)
        {
            wordguess1 = tolower(wordguess.at(0));
            wordguess2 = tolower(wordguess.at(1));
            wordguess3 = tolower(wordguess.at(2));
            wordguess4 = tolower(wordguess.at(3));
            wordguess5 = tolower(wordguess.at(4));

            if(wordguess1 == letter1)
            {
                if(wordguess2 == letter2)
                {
                    if(wordguess3 == letter3)
                    {
                        if(wordguess4 == letter4)
                        {
                            if(wordguess5 == letter5)
                            {
                                endgame = true;
                                cout << "You guessed the word correctly in " << guesses;
                                if(guesses == 1)
                                {
                                    cout << " guess! You Win!" << endl;
                                }
                                if(guesses > 1)
                                {
                                    cout << " guesses! You Win!" << endl;
                                }
                            }
                        }
                    }
                }
            }
        }                   
    }

    if(endgame == false)
    {
        cout << endl << sworddash << endl;
        guessesleft --;
    }

    //============================================
    //4th letter guess
    //============================================
    
    if(endgame == false)
    {
        guesses ++;
        cout << "You have " << guessesleft << " guesses left. Guess a letter: ";
        cin.ignore();
        getline(cin, letterguess);
        
        if(letterguess.length() == 1)
        {
            guesschar = tolower(letterguess.at(0)); //probably a better way somehow to avoid using a string
        }
        if(guesschar == letter1)
        {
            sworddash.at(0) = guesschar;
            cout << "You guessed the first letter correct!" << endl;
        }
        if(guesschar == letter2)
        {
            sworddash.at(1) = guesschar;
            cout << "You guessed the second letter correct!" << endl;
        }
        if(guesschar == letter3)
        {
            sworddash.at(2) = guesschar;
            cout << "You guessed the third letter correct!" << endl;
        }
        if(guesschar == letter4)
        {
            sworddash.at(3) = guesschar;
            cout << "You guessed the fourth letter correct!" << endl;
        }
        if(guesschar == letter5)
        {
            sworddash.at(4) = guesschar;
            cout << "You guessed the fifth letter correct!" << endl;
        }
        if(letterguess.length() > 1)
        {
            endgame = true;
            cout << "Run the program again. You can only input one letter at a time." << endl;
        }
        if(letterguess == "")
        {
            endgame = true;    
            cout << "Run the program again. You did not insert a letter." << endl;
        }
    }

    

    if(endgame == false)
    {

        if(sworddash.at(0) == letter1)
        {
            if(sworddash.at(1) == letter2)
            {
                if(sworddash.at(2) == letter3)
                {
                    if(sworddash.at(3) == letter4)
                    {
                        if(sworddash.at(4) == letter5)
                        {
                            endgame = true;
                            cout << "You guessed the word correctly in " << guesses << " guesses! You Win!" << endl;
                        }
                    }
                }
            }
        }
    }
    //============================================
    //4th Word Guess
    //============================================
    if(endgame == false)
    {
        cout << sworddash << endl;
        cout << "You have " << guessesleft << " guesses left. Take a guess at the word: ";
        cin >> wordguess;
        
        if (wordguess.length() == 5)
        {
            wordguess1 = tolower(wordguess.at(0));
            wordguess2 = tolower(wordguess.at(1));
            wordguess3 = tolower(wordguess.at(2));
            wordguess4 = tolower(wordguess.at(3));
            wordguess5 = tolower(wordguess.at(4));

            if(wordguess1 == letter1)
            {
                if(wordguess2 == letter2)
                {
                    if(wordguess3 == letter3)
                    {
                        if(wordguess4 == letter4)
                        {
                            if(wordguess5 == letter5)
                            {
                                endgame = true;
                                cout << "You guessed the word correctly in " << guesses;
                                if(guesses == 1)
                                {
                                    cout << " guess! You Win!" << endl;
                                }
                                if(guesses > 1)
                                {
                                    cout << " guesses! You Win!" << endl;
                                }
                            }
                        }
                    }
                }
            }
        }

    }
        
    if(endgame == false)
    {
        cout << endl << sworddash << endl;
        guessesleft --;
    }

    //============================================
    //5th letter guess
    //============================================
    
    if(endgame == false)
    {
        guesses ++;
        cout << "You have " << guessesleft << " guess left. Guess a letter: ";
        cin.ignore();
        getline(cin, letterguess);
        
        if(letterguess.length() == 1)
        {
            guesschar = tolower(letterguess.at(0)); //probably a better way somehow to avoid using a string
        }
        if(guesschar == letter1)
        {
            sworddash.at(0) = guesschar;
            cout << "You guessed the first letter correct!" << endl;
        }
        if(guesschar == letter2)
        {
            sworddash.at(1) = guesschar;
            cout << "You guessed the second letter correct!" << endl;
        }
        if(guesschar == letter3)
        {
            sworddash.at(2) = guesschar;
        }
        if(guesschar == letter4)
        {
            sworddash.at(3) = guesschar;
            cout << "You guessed the fourth letter correct!" << endl;
        }
        if(guesschar == letter5)
        {
            sworddash.at(4) = guesschar;
            cout << "You guessed the fifth letter correct!" << endl;
        }
        if(letterguess.length() > 1)
        {
            endgame = true;
            cout << "Run the program again. You can only input one letter at a time." << endl;
        }
        if(letterguess == "")
        {
            endgame = true;    
            cout << "Run the program again. You did not insert a letter." << endl;
        }
    }

    

    if(endgame == false)
    {

        if(sworddash.at(0) == letter1)
        {
            if(sworddash.at(1) == letter2)
            {
                if(sworddash.at(2) == letter3)
                {
                    if(sworddash.at(3) == letter4)
                    {
                        if(sworddash.at(4) == letter5)
                        {
                            endgame = true;
                            cout << "You guessed the word correctly in " << guesses << " guesses! You Win!" << endl;
                        }
                    }
                }
            }
        }
    }
    //============================================
    //5th Word Guess
    //============================================
    if(endgame == false)
    {
        cout << sworddash << endl;
        
        cout << "You have " << guessesleft << " guesses left. Take a guess at the word: ";
                cin >> wordguess;
                
                if (wordguess.length() == 5)
                {
                    wordguess1 = tolower(wordguess.at(0));
                    wordguess2 = tolower(wordguess.at(1));
                    wordguess3 = tolower(wordguess.at(2));
                    wordguess4 = tolower(wordguess.at(3));
                    wordguess5 = tolower(wordguess.at(4));

                    if(wordguess1 == letter1)
                    {
                        if(wordguess2 == letter2)
                        {
                            if(wordguess3 == letter3)
                            {
                                if(wordguess4 == letter4)
                                {
                                    if(wordguess5 == letter5)
                                    {
                                        endgame = true;
                                        cout << "You guessed the word correctly in " << guesses;
                                        if(guesses == 1)
                                        {
                                            cout << " guess! You Win!" << endl;
                                        }
                                        if(guesses > 1)
                                        {
                                            cout << " guesses! You Win!" << endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
    }
    
    if(endgame == false)
    {
        guessesleft --;
        if(guessesleft == 0)
        {
            cout << "Sorry, you lose! The word was " << letter1 << letter2 << letter3 << letter4 << letter5 << ". Better luck next time." << endl;
        }
    }
}