#include <iostream>
#include <string>
using namespace std;

void menu()
{
    cout << "Add or Subtract" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
}

int choice()
{
    int choicein;
    cout << "Please make a selection: ";
    cin >> choicein;
    return choicein;

}

int addition(int number1,int number2)
{
    cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
}

int subtraction(int number1, int number2)
{
    cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
}

int numberinput(int choice)
{
    int input1;
    int input2;
    int answer;
    cout << "Enter a number: ";
    cin >> input1;
    cout << "Enter another number: ";
    cin >> input2;
    if(choice == 1)
    {
        addition(input1, input2);
    }
    if(choice == 2)
    {
        subtraction(input1, input2);
    }
}

int main()
{
    int choicein;
    menu();
    choicein = choice();
    numberinput(choicein);
}


