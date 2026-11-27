#include <iostream>
#include <ctime>
using namespace std;

char userchoice();
char computer_choice();
void showchoice(char choice);
void compute_winner(char choice1, char choice2);

int main()
{
    char choice_user, choice_computer;

    cout << "\n*******################*********\n";
    cout << "Enter your valid choice by following below:\n";
    cout << "'R' is for Rock.\n";
    cout << "'P' is for Paper.\n";
    cout << "'S' is for Scissor.\n";

    choice_user = userchoice();
    cout << "You ";
    showchoice(choice_user);

    choice_computer = computer_choice();
    cout << "Computer ";
    showchoice(choice_computer);

    cout<<'\n';

    compute_winner(choice_user, choice_computer);

     cout << "\n*******#######...END...#########*********\n";

    // cout<< choice_user;

    return 0;
}

char userchoice()
{
    char choice;
    do
    {
        cin >> choice;
        if (choice != 'R' && choice != 'P' && choice != 'S')
        {
            cout << "Choose a valid input..\n";
        }

    } while (choice != 'R' && choice != 'P' && choice != 'S');
}
char computer_choice()
{

    srand(time(0));

    int num = (rand() % 3) + 1;

    if (num == 1)
    {
        return 'R';
    }

    else if (num == 2)
    {
        return 'P';
    }

    else
    {
        return 'S';
    }
}
void showchoice(char choice)
{
    switch (choice)
    {
    case 'R':
        cout << "choice \"Rock\".\n";
        break;
    case 'P':
        cout << "choice \"Paper\".\n";
        break;
    case 'S':
        cout << "choice \"Scissor\".\n";
        break;
    }
}
void compute_winner(char choice1, char choice2)
{
    if (choice1 == 'R')
    {
        if (choice2 == 'R')
        {
            cout << "It's a tie!!..\n";
        }
        else if (choice2 == 'P')
        {
            cout << "You lose...:)... & computer win...\n";
        }
        else
        {
            cout << "You win...Hurrah!!!.. & Computer lose...:)...\n";
        }
    }
    else if (choice1 == 'P')
    {
        if (choice2 == 'R')
        {
            cout << "You win...Hurrah!!!.. & Computer lose...:)...\n";
        }
        else if (choice2 == 'P')
        {
              cout << "It's a tie!!..\n";
        }
        else
        {
           cout << "You lose...:)... & computer win...\n";
        }
    }
    else 
    {
        if (choice2 == 'R')
        {
            cout << "You lose...:)... & computer win...\n";
        }
        else if (choice2 == 'P')
        {
            cout << "You win...Hurrah!!!.. & Computer lose...:)...\n";
        }
        else
        {
            cout << "It's a tie!!..\n";
        }
    }
}
