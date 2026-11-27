#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int num, guess, tries=0;

    srand(time(NULL));

    num = (rand() % 100) + 1;

    cout << "****** Number Guess Game ******\n";

    do
    {
        cout << "Guess a number: ";
        cin >> guess;

        tries++;

        if (guess > num)
        {
            cout << "Too High!!..\n";
        }
        else if (guess < num)
        {
            cout << "Too Low!!..\n";
        }
        else
        {
            cout << "Correct....of tries " << tries<<'\n';
        }

    } while (num != guess);

    cout << "################################\n";
    
    return 0;
}
