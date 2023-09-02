#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

void saveWinnerName(const string &winnerName)
{
    ofstream outputFile("winner.txt");
    if (outputFile.is_open())
    {
        outputFile << "Winner: " << winnerName << endl;
        outputFile.close();
        cout << "Winner name saved to the file." << endl;
    }
    else
    {
        cout << "Unable to open the file." << endl;
    }
}

int main()
{
    int number, badluck = 0;
    int guess, count, level, players;
    int retry = 0;
    char name1[20], name2[20];

    srand(time(0));

    cout << "--------------------------------------------------------" << endl;
    cout << "Guess The Number Game" << endl;
    cout << "We have generated a random number you have to guess it" << endl
         << endl;

    cout << "Choose level -- (1) EASY, (2) NORMAL, (3) HARD: "<<endl;
    cin >> level;

    cout << "-- PLAYERS --" << endl;
    cout << "Single Player -- (1)" << endl;
    cin >> players;

    if (players == 1)
    {
        cout << "Type your name here: ";
        scanf("%s", name1);
    }

    if (level == 1)
    {
        number = rand() % 50 + 1;

        do
        {
            cout << endl
                 << name1 << ", your number is between 1-50" << endl;
            cout << "TYPE YOUR GUESS -> ";
            cin >> guess;

            if (guess == number)
            {
                if (badluck <= 0)
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "You performed amazing!" << endl;
                    cout << "You completed this in " << badluck << " try" << endl;
                    cout << "**********************************************" << endl;
                    saveWinnerName(name1);
                    break;
                }
                else if (badluck <= 1)
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "You did very well (; " << endl;
                    cout << "You completed this in " << badluck << " try" << endl;
                    cout << "**********************************************" << endl;
                    saveWinnerName(name1);
                    break;
                }
                else if (badluck <= 3)
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "You did average" << endl;
                    cout << "You completed this in " << badluck << " tries" << endl;
                    cout << "**********************************************" << endl;
                    saveWinnerName(name1);
                    break;
                }
                else if (badluck <= 6)
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "You did good" << endl;
                    cout << "You completed this in " << badluck << " tries" << endl;
                    cout << "**********************************************" << endl;
                    saveWinnerName(name1);
                    break;
                }
                else if (badluck <= 8)
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "Better luck next time" << endl;
                    cout << "You completed this in " << badluck << " tries" << endl;
                    cout << "**********************************************" << endl;
                    saveWinnerName(name1);
                    break;
                }
                else
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "Try, try, but don't cry" << endl;
                    cout << "You completed this in " << badluck << " tries" << endl;
                    cout << "**********************************************" << endl;
                    saveWinnerName(name1);
                    break;
                }
            }
            else if (guess < number)
            {
                count++;
                badluck++;
                cout << endl
                     << "@@ ~~ Enter a greater number ~~" << endl;

                if (count == 15)
                {
                    cout << endl
                         << "Retry number is: " << count << endl;
                    cout << "RETRY -->(0)" << endl;
                    cout << "EXIT -- (1)" << endl;
                    cin >> retry;
                }
            }
            else if (guess > number)
            {
                badluck++;
                count++;
                cout << endl
                     << "@@ ~~ Enter a smaller number ~~" << endl;

                if (count == 105)
                {
                    cout << endl
                         << "Retry number is: " << count << endl;
                    cout << "RETRY -->(0)" << endl;
                    cout << "EXIT -- (1)" << endl;
                    cin >> retry;
                }
            }
            else
            {
                cout << "What are you typing, bro? +_+" << endl;
            }

        } while (count < 112);
    }
    if (level == 2)
    {
        number = rand() % 100 + 1;

        do
        {
            cout << endl
                 << name1 << ", your number is between 1-100" << endl;
            cout << "TYPE YOUR GUESS -> ";
            cin >> guess;

            if (guess == number)
            {
                if (badluck <= 0)
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "You performed amazing!" << endl;
                    cout << "You completed this in " << badluck << " try" << endl;
                    cout << "**********************************************" << endl;
                    break;
                }
                else if (badluck <= 1)
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "You did very well (; " << endl;
                    cout << "You completed this in " << badluck << " try" << endl;
                    cout << "**********************************************" << endl;
                    break;
                }
                else if (badluck <= 3)
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "You did average" << endl;
                    cout << "You completed this in " << badluck << " tries" << endl;
                    cout << "**********************************************" << endl;
                    break;
                }
                else if (badluck <= 6)
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "You did good" << endl;
                    cout << "You completed this in " << badluck << " tries" << endl;
                    cout << "**********************************************" << endl;
                    break;
                }
                else if (badluck <= 8)
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "Better luck next time" << endl;
                    cout << "You completed this in " << badluck << " tries" << endl;
                    cout << "**********************************************" << endl;
                    break;
                }
                else
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "Try try but don't cry" << endl;
                    cout << "You completed this in " << badluck << " tries" << endl;
                    cout << "**********************************************" << endl;
                    break;
                }
            }
            else if (guess < number)
            {
                count++;
                badluck++;
                cout << endl
                     << "@@ ~~ Enter a greater number ~~" << endl;

                if (count == 105)
                {
                    cout << endl
                         << "Retry number is: " << count << " and level is: " << level << endl;
                    cout << "RETRY -->(0)" << endl;
                    cout << "EXIT--(1)" << endl;
                    cin >> retry;
                }
            }
            else if (guess > number)
            {
                badluck++;
                count++;
                cout << endl
                     << "@@ ~~ Enter a smaller number ~~" << endl;

                if (count == 15)
                {
                    cout << endl
                         << "Retry number is: " << count << " and level is: " << level << endl;
                    cout << "RETRY -->(0)" << endl;
                    cout << "EXIT--(1)" << endl;
                    cin >> retry;
                }
            }
            else
            {
                cout << "What are you typing, bro? +_+" << endl;
            }
        } while (count < 112);
    }
    if (level == 3)
    {
        number = rand() % 200 + 1;

        do
        {
            cout << endl
                 << name1 << ", your number is between 1-200" << endl;
            cout << "TYPE YOUR GUESS -> ";
            cin >> guess;

            if (guess == number)
            {
                if (badluck <= 0)
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "You performed amazing!" << endl;
                    cout << "You completed this in " << badluck << " try" << endl;
                    cout << "**********************************************" << endl;
                    break;
                }
                else if (badluck <= 1)
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "You did very well (; " << endl;
                    cout << "You completed this in " << badluck << " try" << endl;
                    cout << "**********************************************" << endl;
                    break;
                }
                else if (badluck <= 3)
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "You did average" << endl;
                    cout << "You completed this in " << badluck << " tries" << endl;
                    cout << "**********************************************" << endl;
                    break;
                }
                else if (badluck <= 6)
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "You did good" << endl;
                    cout << "You completed this in " << badluck << " tries" << endl;
                    cout << "**********************************************" << endl;
                    break;
                }
                else if (badluck <= 8)
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "Better luck next time" << endl;
                    cout << "You completed this in " << badluck << " tries" << endl;
                    cout << "**********************************************" << endl;
                    break;
                }
                else
                {
                    cout << endl
                         << "**********************************************" << endl;
                    cout << "Try try but don't cry" << endl;
                    cout << "You completed this in " << badluck << " tries" << endl;
                    cout << "**********************************************" << endl;
                    break;
                }
            }
            else if (guess < number)
            {
                count++;
                badluck++;
                cout << endl
                     << "@@ ~~ Enter a greater number ~~" << endl;

                if (count == 112)
                {
                    cout << endl
                         << "Retry number is: " << count << " and level is: " << level << endl;
                    cout << "RETRY -->(0)" << endl;
                    cout << "EXIT--(1)" << endl;
                    cin >> retry;
                }
            }
            else if (guess > number)
            {
                badluck++;
                count++;
                cout << endl
                     << "@@ ~~ Enter a smaller number ~~" << endl;

                if (count == 112)
                {
                    cout << endl
                         << "Retry number is: " << count << " and level is: " << level << endl;
                    cout << "RETRY -->(0)" << endl;
                    cout << "EXIT--(1)" << endl;
                    cin >> retry;
                }
            }
            else
            {
                cout << "What are you typing, bro? +_+" << endl;
            }
        } while (count < 112);
    }

    else
    {
        cout << "Invalid level selected." << endl;
    }

    return 0;
}
