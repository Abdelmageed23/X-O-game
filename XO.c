#include <conio.h>

char arr[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
char turn[] = {'X','O'};
int player_turn=0;

void game_Instrction();
void pattern();
char First_player();
int check_winner();
void play_XO();

void main()
{
    play_XO();
    return 0;
}

/*
pattern function to print the X-O pattern
*/
void game_Instrction()
{
    printf("welcome to X-O Game\n");
    printf("select the number you want to add as the pattern\n");
    printf("\n%d|%d|%d\n%d|%d|%d\n%d|%d|%d\n\n",1,2,3,4,5,6,7,8,9);

}
void pattern(void)
{
    printf("\n%c|%c|%c\n%c|%c|%c\n%c|%c|%c\n\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8]);
}
/*
First player function to select who will play first X or O and return 0 for X player and 1 for O player
*/
char First_player()
{
    char player;
    printf("Select player to play first X or O\n");
    while(1)
    {
    player= getch();
    switch(player)
    {
    case 'X':
    case 'x':
        return 0;
        break;
    case 'O':
    case 'o':
        return 1;
        break;
    default:
        printf("wrong Selection, Try again\n");
    }
    }
}

void play_XO()
{
    game_Instrction();
    player_turn = First_player(); // to adjust the turn based on the first player

    while(1)
    {
    printf("select number from 1 to 9\n");
    int input;
    scanf("%d",&input);
    /*
        check the input selection from 1 to 9
    */
    switch(input)
    {
    case 1:
        if(arr[0]==' ')
        {
            /*
                adjust the selection by reminder operation as if the turn divisible by 2 so its X turn else O turn
            */
            arr[0]=turn[player_turn%2];
            player_turn++;
            pattern();
            if (check_winner()==0)  return 0;
        }
        else
            printf("busy location, select another one ");
            break;
    case 2:
        if(arr[1]==' ')
        {
            arr[1]=turn[player_turn%2];
            player_turn++;
            pattern();
            if (check_winner()==0)  return 0;
        }
        else
            printf("busy location, select another one ");
             break;
    case 3:
        if(arr[2]==' ')
        {
            arr[2]=turn[player_turn%2];
            player_turn++;
            pattern();
            if (check_winner()==0)  return 0;

        }
        else
            printf("busy location, select another one ");
             break;
    case 4:
        if(arr[3]==' ')
        {
            arr[3]=turn[player_turn%2];
            player_turn++;
            pattern();
            if (check_winner()==0)  return 0;

        }
        else
            printf("busy location, select another one ");
             break;
    case 5:
        if(arr[4]==' ')
        {
            arr[4]=turn[player_turn%2];
            player_turn++;
            pattern();
            if (check_winner()==0)  return 0;
        }
        else
            printf("busy location, select another one ");
             break;
    case 6:
        if(arr[5]==' ')
        {
            arr[5]=turn[player_turn%2];
            player_turn++;
            pattern();
           if (check_winner()==0)  return 0;
        }
        else
            printf("busy location, select another one ");
             break;

    case 7:
        if(arr[6]==' ')
        {
            arr[6]=turn[player_turn%2];
            player_turn++;
            pattern();
            if (check_winner()==0)  return 0;
        }
        else
            printf("busy location, select another one ");
             break;
    case 8:
        if(arr[7]==' ')
        {
            arr[7]=turn[player_turn%2];
            player_turn++;
            pattern();
            if (check_winner()==0)  return 0;
        }
        else
            printf("busy location, select another one ");
             break;
    case 9:
        if(arr[8]==' ')
        {
            arr[8]=turn[player_turn%2];
            player_turn++;
            pattern();
            if (check_winner()==0)  return 0;

        }
        else
            printf("busy location, select another one ");
             break;

    }
    }
}

/*
check the winner X or O by:
it the 3 row or 3 column or any diagonal is equal so he is the winner

check if the pattern is full gives GAME OVER
*/
int check_winner()
{
    if((arr[0]==arr[1]&&arr[1]==arr[2]&&arr[2]=='X')||(arr[3]==arr[4]&&arr[4]==arr[5]&&arr[5]=='X')||(arr[6]==arr[7]&&arr[7]==arr[8]&&arr[8]=='X'))
    {
        printf("\n*********X-player win*********\n");
        return 0;
    }

    else if((arr[0]==arr[3]&&arr[3]==arr[6]&&arr[6]=='X')||(arr[1]==arr[4]&&arr[4]==arr[7]&&arr[7]=='X')||(arr[2]==arr[5]&&arr[5]==arr[8]&&arr[8]=='X'))
    {
        printf("\n*********X-player win*********\n");
        return 0;
    }

    else if((arr[0]==arr[4]&&arr[4]==arr[8]&&arr[8]=='X')||(arr[2]==arr[4]&&arr[4]==arr[6]&&arr[6]=='X'))
    {
        printf("\n*********X-player win*********\n");
        return 0;
    }

    else if((arr[0]==arr[1]&&arr[1]==arr[2]&&arr[2]=='O')||(arr[3]==arr[4]&&arr[4]==arr[5]&&arr[5]=='O')||(arr[6]==arr[7]&&arr[7]==arr[8]&&arr[8]=='O'))
    {
        printf("\n*********O-player win*********\n");
        return 0;
    }

    else if((arr[0]==arr[3]&&arr[3]==arr[6]&&arr[6]=='O')||(arr[1]==arr[4]&&arr[4]==arr[7]&&arr[7]=='O')||(arr[2]==arr[5]&&arr[5]==arr[8]&&arr[8]=='O'))
    {
        printf("\n*********O-player win*********\n");
        return 0;
    }

    else if((arr[0]==arr[4]&&arr[4]==arr[8]&&arr[8]=='O')||(arr[2]==arr[4]&&arr[4]==arr[6]&&arr[6]=='O'))
    {
        printf("\n*********O-player win*********\n");
        return 0;
    }

    else if(arr[0]!=' '&&arr[1]!=' '&&arr[2]!=' '&&arr[3]!=' '&&arr[4]!=' '&&arr[5]!=' '&&arr[6]!=' '&&arr[7]!=' '&&arr[8]!=' ')
    {

        printf("\n***********GAME OVER************\n");
        return 0;
    }

}
