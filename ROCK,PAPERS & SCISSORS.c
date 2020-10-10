#include<stdio.h>
#include<time.h>
enum{rock,scissors,paper};


void choice(int player)
{
    switch(player)
    {
        case 0:printf("Rock");
            break;
        case 1:printf("scissors");
            break;
        case 2:printf("paper");
            break;
        default:break;
    }
}


int main()
{
        char i;
        int user,computer;
        printf("          WELCOME TO ROCK,PAPER & SCISSORS GAME         ");
        label:
        printf("\n Rock=0,scissors=1,paper=2 \n");


    printf("Make A Choice : ");
    scanf("%d",&user);


    srand(time(NULL));
    computer=rand()%3;


    printf("\nYou Choose: ");
    choice(user);
   printf("\nComputer Choose: ");
   choice(computer);


    if(computer==user)
    {
        printf("\nDraw game");
        printf("\n Keep Trying!!");
    }
    else if(user==rock && computer!=paper || user==paper &&computer!=scissors || user==scissors && computer!=rock)
    {
        printf("\n CONGRATULATIONS,You Won!!");
    }
    else
        {
            printf("\n Computer Won!!");
            printf("\n Better  Luck Next Time!!");
        }


        printf("\n DO YOU WANT TO CONTINUE?(FOR YES PRESS 1 & FOR NO PRESS O): ");
        scanf("%d",&i);
        while(i!=0)
        {
            goto label;
        }
        printf("\n Quiting......Hope You ENJOYED THE GAME!!");


    return 0;
}
