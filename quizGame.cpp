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

    string firQuestion;
    string secQuestion;
    string thirdQuestion;
    string fourthQuestion;
    string fifthQuestion;
    int correct = 0;
    int incorrect = 0;

    char userAnswers[5];

    cout << "\nWelcome to the quiz competition." << endl;
    cout << "--------------------------------\n" << endl;

    cout << "1. What is a correct syntax to output 'Hello World' in C++?" << endl;
    cout << "----------------" << endl;
    cout << "a. cout << 'Hello World';" << endl; 
    cout << "b. print ('Hello World');" << endl; 
    cout << "c. System.out.println('Hello World')" << endl; 
    cout << "d. Console.WriteLine('Hello World');" << endl; 
    cout << "----------------" << endl;

    cout << "Choose: " ;
    cin >> userAnswers[0];
    cout << "----------------" << endl;
    userAnswers[0] == 'a' ? correct++ : incorrect++;
    userAnswers[0] != 'a' ? cout << "WRONG---^\nCorrect: a" << endl : cout << "Correct" << endl;

    cout << "\n2. How do you insert COMMENTS in C++ code?" << endl;
    cout << "----------------" << endl;
    cout << "a. // This is a comment" << endl; 
    cout << "b. # This is a comment" << endl; 
    cout << "c. /* This is a comment" << endl; 
    cout << "d. /// This is a comment" << endl;
    cout << "----------------" << endl;

    cout << "Choose: " ;
    cin >> userAnswers[1];
    cout << "----------------" << endl;
    userAnswers[1] == 'a' ? correct++ : incorrect++;
    userAnswers[1] != 'a' ? cout << "WRONG---^\nCorrect: a" << endl : cout << "Correct" << endl;


    cout << "\n3. Which data type is used to create a variable that should store text?" << endl;
    cout << "----------------" << endl;
    cout << "a. string" << endl;
    cout << "b. myString" << endl;
    cout << "c. text" << endl;
    cout << "d. String" << endl;
    cout << "----------------" << endl;

    cout << "Choose: " ;
    cin >> userAnswers[2];
    cout << "----------------" << endl;
    userAnswers[2] == 'a' ? correct++ : incorrect++;
    userAnswers[2] != 'a' ? cout << "WRONG---^\nCorrect: a" << endl : cout << "Correct" << endl;

    cout << "\n4. How do you create a variable with numeric value 5?" << endl;
    cout << "----------------" << endl;
    cout << "a. num x = 5" << endl;
    cout << "b. x = 5;" << endl;
    cout << "c. double x = 5;" << endl;
    cout << "d. int x = 5;" << endl;
    cout << "----------------" << endl;

    cout << "Choose: " ;
    cin >> userAnswers[3];
    cout << "----------------" << endl;
    userAnswers[3] == 'd' ? correct++ : incorrect++;
    userAnswers[3] != 'd' ? cout << "WRONG---^\nCorrect: d" << endl : cout << "Correct" << endl;

    cout << "\n5. Which method can be used to find the length of a string?" << endl;
    cout << "----------------" << endl;
    cout << "a. length()" << endl;
    cout << "b. getLen()" << endl;
    cout << "c. len()" << endl;
    cout << "d. getsize()" << endl;
    cout << "----------------" << endl;

    cout << "Choose: " ;
    cin >> userAnswers[4];
    cout << "----------------" << endl;
    userAnswers[4] == 'a' ? correct++ : incorrect++;
    userAnswers[2] != 'a' ? cout << "WRONG---^\nCorrect: a" << endl : cout << "Correct" << endl;
    cout << "---------------------------------------" << endl;
    
    cout << "Total Questions: 5" << endl;
    cout << "Your correct answers are " << correct << endl;
    cout << "Your incorrect answers are " << incorrect << endl;
    cout << "\n----------------" << endl;
    cout << "Result: \n\n" << (double)correct/5*100 << "%" << endl;


    return 0;
}





















































