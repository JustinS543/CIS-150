#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

    //to add a text file to project, right click on project name in solution explorer, click on the project name>>add>>new item>>utility>>text file
    //name the text file and click add

    //ifstream is used to read from file
    ifstream file;
    //have a reference to the name of the file
    //We should declare it as const so it cannot change inside our code
    //make it a string to we can reference this throughout the program

    const string fileName = "users.txt";
    string text;

    //Try to open the file
    //will return true or false
    file.open(fileName);

    //if we can open the file or not
    //Was it found or not?
    if(file)
    {
        //cout << "File Found" << endl;

        //need a loop to find out how big text file is
        //want to continue to read the text file until we have reached end of file
        //going to store each line in text

        while(file >> text)
        {
            cout << text << endl;
        }
        //close the file

        file.close();

        cout << "File was read and closed" << endl;

    }
    else
    {
        cout << "File not found" << endl;
    }


}