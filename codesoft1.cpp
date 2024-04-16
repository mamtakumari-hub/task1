
#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
int main()
{
    // Seed the random number generator
    srand(time(nullptr));

    
    int randomNumber = rand() % 100 + 1;

   
    int guess;

    cout << "Guess the number between 1 and 100: ";

    do
    {
        cin >> guess;

        if (guess < randomNumber)
        {
            cout << "Too low! Try again: ";
        }
        else if (guess > randomNumber)
        {
            cout << "Too high! Try again: ";
        }
        else
        {
            cout << "Congratulations! You guessed it!";
        }
    } while (guess != randomNumber);

    return 0;
}
