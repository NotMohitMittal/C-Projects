#include <iostream>
#include <istream>
#include <string>

using std::cin;
using std::endl;
using std::cout;
using std::string;
using std::getline;

int altEvenSum(const string cardNumber);
int getNumber(const int number);
int oddNumberSum(const string cardNumber);

int main()
{
    string cardNumber;

    cout << "Enter your Card Number: " ;
    cin >> cardNumber;

    int sum = oddNumberSum(cardNumber) + altEvenSum(cardNumber);
    sum % 10 == 0 ? cout << "Valid" : cout << "Invalid";


    return 0;
}

//defining the functions:

int getSum(const int number)
{
    return number%10 + number/10;
}

int altEvenSum(const string cardNumber)
{
    int sum;
    for (int i = cardNumber.size()-2 ; i >= 0; i-=2)
    {
        sum += getSum((cardNumber[i] - '0')*2);
    }
    return sum;
}



int oddNumberSum(const string cardNumber)
{
    int oddSum = 0;
    for (int i = cardNumber.length(); i >= 0; i-=2)
    {
        oddSum += (cardNumber[i]-'0')*2;
    }
    return oddSum;
}
