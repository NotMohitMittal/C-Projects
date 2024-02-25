#include <iostream>
#include <istream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

void showBalance(double balance);
double depositeMoney(double oldBalance);
double withdrawMoney(double oldBalance);
void exitBank();

int main()
{
    int userPick;
    double userBalance = 45;
    
    cout << "WELCOME TO THE BANIKING APP" << endl;
    cout << "---------------------------\n" << endl;
    do
    {
        userPick = 0;
        // Taking valid user Input
        cout << "Choose your options:" << endl;
        cout << "1. Show Balance" << endl;
        cout << "2. Deposite Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. exit" << endl;

        cout << "Choose ---> ";
        cin >> userPick;

        switch (userPick)
        {
        case 1: showBalance(userBalance); break;
        case 2: userBalance = depositeMoney(userBalance); break;
        case 3: userBalance = withdrawMoney(userBalance); break;
        case 4: exitBank(); break;
        default:
            cout << "Not a valid Input.\n" << endl;
            break;
        }
    } while (userPick != 4);
    
   
    return 0;
}

void showBalance(double userBalance)
{
    cout << "Your Current Balance is $" << std::setprecision(2) << std::fixed << userBalance << endl;
}
double depositeMoney(double oldBalance)
{
    double addAmount;
    cout << "Enter the Amount: " ;
    cin >> addAmount;
    oldBalance = oldBalance + addAmount;
    return oldBalance;
}
double withdrawMoney(double oldBalance)
{
    double subAmount;
    cout << "Enter the Amount: " ;
    cin >> subAmount;
    return oldBalance - subAmount;
}
void exitBank()
{
    cout << "Thanks for visiting. Come again SOON." << endl;
}
