#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "This program will generate a random number in the range [-15,20]." <<endl;
    cout << "Your task is to guess the random number." << endl << endl;
    srand(time(0));
    int num = rand()%36-15;
    int guess, count = 0;
    while (true)
    {
        cout << "Enter your guess:";
        cin >> guess;
        count++;
        if (guess == num)
        {
            cout << endl << "You got it. Conguatulations!" << endl;
            break;
        }
        else if (guess > num)
            cout << "Too large of a guess... Try a smaller number." << endl;
        else
            cout << "Too small of a guess... Try a larger number." << endl;
    }
    cout << "You made" << count << "guesses until you guessed right." << endl << endl;
    if (count <= 6)
        cout << "You are clever. Did you have an effcient strategy or was it a luck?" << endl;
    else if (count <= 36)
        cout << "You are not that bad.. but you could guess it in a maximum of 6 guesses." << endl;
    else
        cout << "You are a trial and error guru.. Next time think logically." << endl;
    
    system("pause");
    return 0;
}