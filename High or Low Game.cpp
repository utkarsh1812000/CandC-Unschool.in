#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int user,num[50];
    int bot;
    int i=4;
    int game;
    srand(time(NULL));
    bot=rand()%50;
    cout <<"        WELCOME TO THE HIGH OR LOW GAME!        ";
    label:;
    cout <<"\nRULES:";
    cout <<"\n 1.You need to enter a number between 1 to 50";
    cout <<"\n 2.You have 5 Turns to guess a correct no. generated by computer";
    cout <<"\n 3.If you fail to guess a correct no. in 5 turns computer wins else you win!!";
    cout <<"\n";
    cout <<"\n LET'S START!!";
    cout <<"\n Enter a no. between 1 to 50: ";
    cin >>user;
    for(i=4;i>=1;i--)
    {
        if(user<bot)
        {
            cout <<"\nYour no. is too low!";
            cout <<"\nTry again!";
            cout <<"\nEntering a no. higher than previous: ";
            cin >>user;

        }
        else if(user>bot)
        {
            cout <<"\n Your no. is too high!";
            cout <<"\nTry again";
            cout <<"\nEntering a no. lower than previous: ";
            cin >>user;
        }
        else if(user==bot)
        {
            cout <<"\nCongratulations,You guessed the correct no.";
            cout <<"\nYou won";
            goto label1;
        }
        cout <<"\n";
        cout <<"\nYou have"<<(i-1)<<"Turns left";
    }
    cout <<"\n";
    cout <<"\n Correct no. was"<<bot;
    cout <<"\n Computer Won!!";
    cout <<"\n Better Luck Next Time!!";
    label1:;
    cout <<"\n Wanna play another game?(y=any number expect 0,n=0): ";
    cin >>game;
    while(game!=0)
    {
        goto label;
    }
    cout <<"\n Quiting....Hope You enjoyed the Game!!";



}
