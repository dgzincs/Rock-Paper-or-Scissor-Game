#include <stdio.h>
#include<time.h>
#include <string.h>
#include <stdlib.h>

void setChoice();
int getResult();
int versus();

int main()
{
    int choice;
    printf("Rock, Paper or Scissor game\n\nGet your choice: \t\n 1 - Rock \n 2 - Paper \n 3 - Scissor\n\n 0 - Quit\n\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 0: exit(0);
        case 1: setChoice(choice); break;
        case 2: setChoice(choice); break;
        case 3: setChoice(choice); break;
        default:  system("clear || cls"); printf("Invalid option! Please try again!\n");

    }
    getche();
    return 0;
}

void setChoice(int playerChoice)
{
    switch(versus(playerChoice, getResult()))
    {
      case 0: system("clear || cls"); printf("************\n*** Draw ***\n************\n"); break;
      case 1: system("clear || cls"); printf("***************\n*** Victory ***\n***************\n"); break;
      case 2: system("clear || cls"); printf("************\n*** Lose ***\n************\n"); break;
    }
};

int versus(int x, int y)
{
    // 0 = Empate || 1 = Vitoria || 2 = Derrota
    // x = Player choice || y = getResult function return
    if(x == 1)
    {
        switch(y)
        {
            case 0: return 0; break;
            case 1: return 1; break;
            case 2: return 2; break;
        }
    }
    else if(x == 2)
    {
        switch(y)
        {
            case 0: return 1; break;
            case 1: return 0; break;
            case 2: return 2; break;
        }
    }
    else
    {
        switch(y)
        {
            case 0: return 2; break;
            case 1: return 1; break;
            case 2: return 0; break;
        }
    }
}

int getResult()
{
    srand(time(NULL));
    int result = rand() % 3;
    return result;
}

