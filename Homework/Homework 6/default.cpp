#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

bool primeNum(int number)
{
    for(int i = 2; i < number; i++)
        if(number % i == 0)
        {
            return false;
        }
        return true;
}

void display(int primeNumIn, int &pos)
{
    cout << setw(5);
    if(pos == 0)
    {
        
        cout << primeNumIn;
        pos++;
    }
    else if(pos < 9 && pos > 0)
    {
        cout << setw(0) << ", " << setw(5) << primeNumIn;
        pos++;
    }
    else if(pos == 9)
    {
        cout << setw(0) << ", " << setw(5) << primeNumIn << setw(0) << "," << endl;
        pos = 0;
    }
}

void display(int pos)
{
    cout << endl;
}

int main()
{
    int totalNumbers = 10000;
    int primeNumbers[10000];
    static int pos = 0;

    for(int i = 2, j = 0; i < totalNumbers; i++)
    {
        primeNum(i);
        if(primeNum(i) == 1)
        {
            primeNumbers[j] = i;
            display(primeNumbers[j], pos);
            j++;
        }
    }

    pos = -999;
    display(pos);
}