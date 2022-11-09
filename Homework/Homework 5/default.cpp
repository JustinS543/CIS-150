#include <iostream>
#include <string>
using namespace std;

double addition(double num1, double num2)
{
    return (num1 + num2);
}

double subtract(double num1, double num2)
{
    return (num1 - num2);
}

double multiply(double num1, double num2)
{
    return (num1 * num2);
}

double divide(double num1, double num2)
{
    return (num1 / num2);
}

double absolute(double num1)
{
    if(num1 < 0)
    {
        num1 = num1 * -1;
    }

    else if(num1 >= 0)
    {
        //do nothing
    }
    return num1;
}

void welcome()
{
    cout << "M A T H   A P P L I C A T I O N" << endl;
    cout << "===============================" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Division" << endl;
    cout << "4. Multiplication" << endl;
    cout << "5. Absolute Value" << endl;
}

string selection()
{
    string choice;
    bool valin = false;
    cout << "Please make a selection from the choices above: ";
    cin >> choice;
    while(valin == false)
    {
        if(choice >= "0" && choice <= "9")
        {
            valin = true;
        }
        else
        {
            cout << "INVALID INPUT. TRY AGAIN: ";
            cin >> choice;
        }
    }
    return choice;
}

double input1()
{
    double input1;
    cout << "Enter a number:";
    cin >> input1;
    return input1;
}

double input2()
{
    double input2;
    cout << "Enter a number:";
    cin >> input2;
    return input2;
}

void display(double num1)
{
    double answer;
    answer = absolute(num1);
    cout << "|" << num1 << "|" << " = " << answer << endl;
}

void display(double num1, double num2, string choice)
{
    if(choice == "1")
    {
        double answer;
        answer = addition(num1, num2);
        cout << num1 << " + " << num2 << " = " << answer << endl;
    }
    if(choice == "2")
    {
        double answer;
        answer = subtract(num1, num2);
        cout << num1 << " - " << num2 << " = " << answer << endl;
    }
    
    if(choice == "3")
    {
        double answer;
        answer = divide(num1, num2);
        cout << num1 << " / " << num2 << " = " << answer << endl;
    }
    if(choice == "4")
    {
        double answer;
        answer = multiply(num1, num2);
        cout << num1 << " * " << num2 << " = " << answer << endl;
    }
}

string gameover()
{
    string input;
    bool valin = false;
    cout << "Would you like to run again? (1 - Yes OR 2 - No): ";
    cin >> input;
    while(valin == false)
    {
        if(input == "1" || input == "2")
        {
            valin = true;
            return input;
        }
        else
        {
            cout << "INVALID INPUT. TRY AGAIN: ";
            cin >> input;
        }
    }
}

int main()
{
    string choice;
    string gametest;
    double in1;
    double in2;
    bool endgame = false;

    while(endgame == false)
    {
        system("clear");
        welcome();
        choice = selection();
        if(choice == "5")
        {
            in1 = input1();
            display(in1);
        }
        else
        {
            in1 = input1();
            in2 = input2();
            display(in1, in2, choice);
        }
        gametest = gameover();
        if(gametest == "1")
        {
            //keep going
        }
        else if(gametest == "2")
        {
            endgame = true;
            cout << "Program completed." << endl;
        }
    }
}