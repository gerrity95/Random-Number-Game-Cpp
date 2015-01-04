#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int secretNumber = rand() % 100 + 1;
    int tries = 1;
    int guess;
    string highLow;


    cout << "Welcome to the guessing number game.\nPlease think of a number between 1-100...\nDid you get it??...\nOkay great, my first guess is:\n\n";
    cout << secretNumber;

    cout << "\n\nPlease tell me do I need to go 'higher', 'lower' or am I 'right'?\n";

    do
    {


        cin >> highLow;



        if ( highLow == "higher")
        {
                int secretNumber = rand() % 100 + 1;
                cout << "Okay, is it " << secretNumber << " ?\n";
                tries++;
        }
        else if (highLow == "lower")
        {
                int secretNumber = rand() % 100 + 1;
                cout << "Okay, is it " << secretNumber << " ?\n";
                tries++;

        }
        else if (highLow == "right")
        {
            cout << "\n\nWoohoo I got it, and it only took me " << tries << " attempts";
        }
        else
        {
            cout << "Invalid Input";
        }

    } while (highLow != "right");
        //if statements with nested loops then for the answers

    return 0;
}
