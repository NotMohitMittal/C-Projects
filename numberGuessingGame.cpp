#include <iostream>
#include <istream>
#include <string>
#include <ctime>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::getline;
    using std::string;

    int attempts;
    int userInput;
    srand(time(NULL));
    int randNumber = (rand() % 100) + 1;

    cout << "********** NUMBER GUESSING GAME ************" << endl;
    cout << "\nGuess a NUMBER(1-100): ";
    cin >> userInput;
    attempts++;
    
    while (true)
    {
        if (randNumber < userInput)
        {
            if (userInput - randNumber <= 5)
            {
                cout << "You are a little to high." << endl;
                cout << "\nGuess a NUMBER(1-100): ";
                cin >> userInput;
                attempts++;
            }
            else
            {
                cout << "Too HIGH" << endl;
                cout << "\nGuess a NUMBER(1-100): ";
                cin >> userInput;
                attempts++;
            }
        }
        else if (randNumber > userInput)
        {
            if (randNumber - userInput <= 5)
            {
                cout << "You are a little to low." << endl;
                cout << "\nGuess a NUMBER(1-100): ";
                cin >> userInput;
                attempts++;
            }
            else
            {
                cout << "Too LOW" << endl;
                cout << "\nGuess a NUMBER(1-100): ";
                cin >> userInput;
                attempts++;
            }
        }
        else
        {
            cout << "Very good! you finished in " << attempts << " attempts." << endl;
            break;
        }
    }

    return 0;
}