#include <iostream>
#include <istream>
#include <string>
#include <ctime>

using std::cin;
using std::endl;
using std::cout;
using std::string;
using std::getline;


double addAmount(double *userBalance, double *userMoney);
double withDrawMoney(double *amount);
void showBalance(double amount);
void exitCasino(double userBalance, double *userMoney, double *gain, double *loss);
double playGame(double *userBalance, double *gain, double *loss);

int main()
{
    char userChoice;
    double userMoney = 0, profit = 0, loss = 0;
    double amountGivenCasino = 0;
    
    cout << "\nWelcome To The Casino" << endl;
    cout << "---------------------" << endl;
    do{

        cout << "\n1. Check Balance: " << endl;
        cout << "2. Add Balance: " << endl;
        cout << "3. Withdraw Balance: " << endl;
        cout << "4. Play the game: " << endl;
        cout << "5. Exit and withdraw: " << endl;
        cout << "-------------------" << endl;
        cout << "Choose Option: " ;
        cin >> userChoice;


        switch (userChoice)
        {
        case '1':
            showBalance(amountGivenCasino);
            break;
        case '2':
            addAmount(&amountGivenCasino, &userMoney);
            break;
        case '3':
            withDrawMoney(&amountGivenCasino);
            break;
        case '4':
            playGame(&amountGivenCasino, &profit, &loss);
            break;
        case '5':
            exitCasino(amountGivenCasino, &userMoney, &profit, &loss);
            break;
        default:
            cout << "Please Enter the Correct Option!" << endl;
            break;
        }
    }while(userChoice != '5');

    return 0;
}

double addAmount(double *userBalance, double *userMoney){
    
    int money;
    cout << "Enter the amount to ADD: ";
    cin >> money;
    cout << "Amount " << money << " added successfully into you casino account. " << endl;
    *userMoney+=money;
    return *userBalance+=money;
}

double withDrawMoney(double *userBalance){
    int money;
    cout << "Enter the amount to withdraw: " ;
    cin >> money;
    cout << "Amount " << money << " withdrawn sucessfully." << endl;
    return *userBalance-=money;
}

void showBalance(double userBalance){
    cout << "Your Current Balance is: " << userBalance << endl;
}

void exitCasino(double userBalance, double *userMoney, double *gain, double *loss){
    cout << "\n------------------" << endl;
    cout << "Gain: " << *gain << endl;
    cout << "Loss: " << *loss << endl;
    *userMoney>userBalance ? cout << "You are in Loss! of " << *userMoney-userBalance << endl : cout << "You are in Profit of " << userBalance-*userMoney << endl;
    cout << "------------------" << endl;
    
    cout << "Your Current Balance is: " << userBalance << endl; 
    cout << "Visit the counter for your Money. " << endl;
    cout << "Thanks for visiting" << endl;
}

double playGame(double *userBalance, double *gain, double *loss){
    
    int userPick;
    int betPick;
    int betAmount;

    cout << "What is the amount you wan't to bet on? " << endl;
    cout << "1. $1000" << endl;
    cout << "2. $2000" << endl;
    cout << "3. $3000" << endl;
    cout << "Choose: ";
    cin >> betPick;

    switch (betPick)
    {
    case 1:
        cout << "You are betting for $1000 " << endl;
        betAmount = 1000;
        break;
    case 2:
        cout << "You are betting for $2000 " << endl;
        betAmount = 2000;
        break;
    case 3:
        cout << "You are betting for $2000 " << endl;
        betAmount = 3000;
        break;
    default:
        cout << "Enter the correct option." << endl;
        break;
    }

    cout << "What's the number you want to put your bet on (1-10): " ;
    cin >> userPick;

    int casinoPick;
    srand(time(NULL));
    casinoPick = (rand()%10)+1;

    if(userPick == casinoPick && betPick == 1){
        cout << "You win $1000." << endl;
        *gain += betAmount;
        return *userBalance+=betAmount, *gain;
    }
    else if(userPick == casinoPick && betPick == 2){
        cout << "You win $2000." << endl;
        *gain += betAmount;
        return *userBalance+=betAmount, *gain;
    }
    else if(userPick == casinoPick && betPick == 3){
        cout << "You win $3000." << endl;
        *gain += betAmount;
        return *userBalance+=betAmount, *gain;
    }
    else{
        cout << "You Loose!" << endl;
        *loss+=betAmount;
        return *userBalance-=betAmount, betAmount;
    }
}

