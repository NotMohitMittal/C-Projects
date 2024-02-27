#include <iostream>
#include <istream>
#include <string>

using std::cin;
using std::endl;
using std::cout;
using std::string;
using std::getline;


int main()
{
    int correct = 0;
    int incorrect = 0;

    string questions[] = {
        "1. what is your name? ",
        "2. Who are You? ",
        "3. What are you learning",
        "4. Do you like your life"
    };

    string options[][4] ={
        {"a. Mohit", "b, Rohan", "c. Shubham", "d. Someone"},
        {"a. Person", "b. student", "c. coder", "d. Hacker"},
        {"a. Python", "b. C", "c. C++", "d. Java"},
        {"a. Yes", "b. No", "c. Very Much", "d. Not at all"},
    };

    string answers[] = {"a", "b", "c", "d"};

    int rows = sizeof(answers)/sizeof(answers[0]);
    int columns = sizeof(options[1])/sizeof(options[0][2]);
    
    for (int i = 0; i < rows; i++)
    {
        string temp;
        cout << questions[i] << endl;
        cout << "-----------------" << endl;
        for (int j = 0; j < columns; j++)
        {
            cout << options[i][j] << endl;
        }
        cout << "\n";
        cout << "Choose: ";
        cin >> temp;
        if (answers[i] != temp)
        {
            cout << "Wrong Answer.\nCorrect: " << answers[i] << "\n" << endl;
            incorrect++;
        }
        else
        {
            cout << "Correct\n" << endl;
            correct++;
        }
    }

    cout << "Total Question: 4" << endl;
    cout << "Correct: " << correct << endl;
    cout << "Incorrect: " << incorrect << endl;
    cout << "Result ===> " << (double)correct/4*100 << "%\n\n" << endl;  
    return 0;
}