#include <iostream>
#include <istream>
#include <string>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

string userInput();
int randGenerator();
string compChoice(int para1);
void winnerChoosing(string para1, string para2);

int main()
{
    string output;
    string computer;
    string player;

    cout << "**************** ROCK, PAPER, SCISSORS ***************" << endl;
    computer = compChoice(randGenerator());
    player = userInput();
    cout << "You choose: " << player << endl;
    winnerChoosing(player, computer);

    return 0;
}

int randGenerator()
{
    srand(time(NULL));
    return (rand() % 3) + 1;
}

string compChoice(int para1)
{
    if (para1 == 1)
    {
        return "rock";
    }
    else if (para1== 2)
    {
        return "paper";
    }
    else
    {
        return "scissor";
    }
}

string userInput()
{
    string player;
    do
    {
        cout << "Choose between the options: " << endl;
        cout << "# r or rock," << endl;
        cout << "# p or paper," << endl;
        cout << "# s or scissor,  --------> ";
        cin >> player;
    } while (player != "r" && player != "p" && player !="s" && player != "rock" && player != "paper" && player != "scissor");
    return player;
}

void winnerChoosing(string para1, string para2)
{
    if ((para1 == "rock" || para1 == "r") && para2 == "paper")
    {
        cout << "Sorry! You Loose. Computer choose " << para2 << endl; 
    }
    else if ((para1 == "paper" || para1 == "p") && para2 == "scissor")
    {
        cout << "Sorry! You Loose. Computer choose " << para2 << endl; 
    }
    else if ((para1 == "scissor" || para1 == "s") && para2 == "rock")
    {
        cout << "Sorry! You Loose!. Computer choose " << para2 << endl; 
    }
    else if (para1.at(0) == para2.at(0))
    {
        cout << "This is a draw. You both Choose " << para2 << endl;
    }
    else
    {
        cout << "You Won! Computer Choose " << para2 << endl;
    }
}