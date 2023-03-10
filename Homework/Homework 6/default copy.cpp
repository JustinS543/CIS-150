//=================================================================
//Name: Justin Schley
//Date: 2022-28-11
//Desc: Prime Number Calculator
//=================================================================

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//======================================
//Checking for prime number
//======================================

bool primeNum(int number)
{
    for(int i = 2; i < number; i++)
        if(number % i == 0)
        {
            return false;
        }
        return true;
}

//======================================
//Displays prime numbers
//======================================

void display(int primeNumIn[], int &pos, int total)
{
    for(int i = 0; i < total; i++)
    {
        if(pos == 0)
        {
            cout << setw(5);
            cout << primeNumIn[i];
            pos++;
        }
        else if(pos < 9 && pos > 0)
        {
            cout << setw(0) << ", " << setw(5) << primeNumIn[i];
            pos++;
        }
        else if(pos == 9)
        {
            cout << setw(0) << ", " << setw(5) << primeNumIn[i] << setw(0) << "," << endl;
            pos = 0;
        }
    }
}

//======================================
//Creates new line at end of program
//======================================

void display(int pos)
{
    cout << endl;
}

int main()
{
    int totalPrime = 0;
    const int TOTALNUM = 10000;
    int primeNumbers[TOTALNUM];
    static int pos = 0;

    for(int i = 2; i < TOTALNUM; i++)
    {
        if(primeNum(i) == 1)
        {
            primeNumbers[totalPrime] = i;
            totalPrime++;
        }
    }
    display(primeNumbers, pos, totalPrime);

    pos = -999;
    display(pos);
}