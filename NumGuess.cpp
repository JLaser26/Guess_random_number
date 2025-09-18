#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int GenRandomNumber(int range){
    srand(time(nullptr));
    int ranNum = rand() % range;
    return ranNum;
}

int main()
{
    int lim;
    cout << "\n_________________________________________________________\n";
    cout << "Enter a number limit to which you will you guess: ";
    cin >> lim;
    int res = GenRandomNumber(lim);
    do
    {
        cout << "\n_________________________________________________________\n";
        int input;
        cout << "\nMake a Guess: ";
        cin >> input;

        if (input == res)
        {
            cout << "\nYou Got it!\n";
            break;
        }
        else if (input < res)
        {
            cout << "\nHINT: It is Larger!\n";
        }
        else if (input > res)
        {
            cout << "\nHINT: It is Smaller!\n";
        }
        else{
            cout <<"\nInvalid Input\n";
        }
    } while (true);
    
    
    
     // Pause before exit
    cout << "\nPress Enter to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear leftover input
    cin.get(); // wait for Enter
    
    return 0;
}
