#include <iostream>
using namespace std;

int main()
{
    int numinput;
    int fizztrue = false;
    int buzztrue = false;

    cout << "Please enter a number: ";
    cin >> numinput;
    cout << endl;

    if(numinput % 5 == 0)
    {
        fizztrue = true;
    }

    if(numinput % 3 == 0)
    {
        buzztrue = true;
    }

    if(fizztrue == true)
    {
        cout << "FIZZ";
    }

    if(buzztrue == true)
    {
        cout << "BUZZ";
    }
    cout << endl;
}