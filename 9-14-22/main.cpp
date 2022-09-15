#include <iostream>
using namespace std;

int main()
{

    int x;
    int y;
    int add;
    int subtr;
    int mult;
    int divide;


    cout << "Please enter a number: " << endl;
    cin >> x;
    cout << "Please enter another number: " << endl;
    cin >> y;

    add = x + y;
    subtr = x - y;
    mult = x * y;
    divide = x / y;

    cout << x << " + " << y << " = " << add << endl;
    cout << x << " - " << y << " = " << subtr << endl;
    cout << x << " * " << y << " = " << mult << endl;
    cout << x << " / " << y << " = " << divide << endl;




}