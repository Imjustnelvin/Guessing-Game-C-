#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

/*
Guessing Game v0.0.1
version details: 
*Pinalitan yung array at ginamit yung vector(reason mas masayang gamitin lol).
*Medyo maangas na yung logic ng dahil sa vector.
*/

using namespace std;

void _printguess(vector<int> userguesses)//printguess Method
{
    vector<int> data;//my vector
    cout << "Your guesses: \n";
        for (int i = 0; i < userguesses.size(); i++)
        {
            //cout << (i + 1) << ". " << array[i] << endl;
            data.push_back(userguesses[i]);
            cout << data[i] << endl; //working using vector
        }
        cout << endl;
}

void _game()//game Method
{
    srand(time(NULL));

    int random, userguess; //Variables
    vector<int> userguesses; // using vector

    random = rand() % 51;//Generate random number
    
    cout << "*Playing Guessing Game. [1 - 50]\n";
    while(true) //Guess the number logic
    {
        cout << "Guess the number: ";
        cin >> userguess;
        userguesses.push_back(userguess); //using vector

        if (userguess == random)
        {
            cout << "=> Congratulation you win $1,000,000,000!\n";
            break;
        }
        else if (userguess > random)
        {
            cout << "=> Too High\n";
        }
        else
        {
            cout << "=> Too Low\n"; 
        }
    }
    cout << "You got the correct answer at "<< userguesses.size() << " attempt.\n";

      //ask user if want to view guesses
    int viewguesses;
    cout << "Want to view your guesses? 0:Yes/1:No\n";
    cin >> viewguesses;
    if(viewguesses == 0)
    {
        _printguess(userguesses);
    }
    else
    {
       true;
    }
}

int main()//main Method
{
    int choice;
    bool quit = false;
    do 
    {
        cout << "MENU: \n";
        cout << "0. Quit \n1. Play\n";
        cin >> choice;

        switch(choice)
        {
            case 0:
                cout << "*Quiting the game" << endl;
                quit = true;
            break;
           
            case 1:
                _game();
            break;
        }
    } 
    while(quit == false);
}