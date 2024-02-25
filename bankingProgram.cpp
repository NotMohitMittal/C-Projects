#include <iostream>
#include <istream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline ;
using std::string;

void showBalance(int balance);
double depositeMoney(double oldBalance, double addAmount);
double withdrawMoney(double oldBalance, double subAmount);
void exitBank();

int main()
{
    int userPick;
    double userBalance = 45;
    double deposite;
    double withDraw;
    double amount;

    // Taking valid user Input
    cout << "WELCOME TO THE BANIKING APP" << endl;
    cout << "---------------------------\n" << endl;
        
    do
    {
        userPick = 0;
        while (userPick != 1 && userPick != 2 && userPick != 3 && userPick != 4)
        {
            cout << "Choose your options:" << endl;
            cout << "1. Show Balance" << endl;
            cout << "2. Deposite Money" << endl;
            cout << "3. Withdraw Money" << endl;
            cout << "4. exit" << endl;

            cout << "Choose ---> ";
            cin >> userPick;
        }

        if (userPick == 1)
        {
            showBalance(userBalance);
        }
        else if (userPick == 2)
        {
            cout << "Enter the Amount: ";
            cin >> amount;
            userBalance = depositeMoney(userBalance, amount);
            cout << amount << " balance added sucessfully." << endl;
            cout << "Current account balance " << userBalance << endl;
        }
        else if (userPick == 3)
        {
            cout << "Enter the Amount: ";
            cin >> amount;
            userBalance = withdrawMoney(userBalance, amount);
            cout << amount << " balance withdraw sucessfully." << endl;
            cout << "Current account balance " << userBalance << endl;
        }
        else if (userPick == 4)
        {
            exitBank();
        }
    } while (userPick != 4);

    return 0;
}

void showBalance(int userBalance)
{
    cout << "Your Current Balance is " << userBalance << endl;
}
double depositeMoney(double oldBalance, double addAmount)
{
    return oldBalance + addAmount;
}
double withdrawMoney(double oldBalance, double subAmount)
{
    return oldBalance - subAmount;
}
void exitBank()
{
    cout << "Thanks for visiting. Come again SOON." << endl;
}
