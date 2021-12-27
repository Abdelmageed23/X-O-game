
/*
pattern function to the print the Game Instruction for first time
*/
void game_Instrction()
{
    printf("welcome to X-O Game\n");
    printf("select the number you want to add as the pattern\n");
    printf("\n%d|%d|%d\n%d|%d|%d\n%d|%d|%d\n\n",1,2,3,4,5,6,7,8,9);
}

/* function to print the updated function  */
void pattern(void)
{
    printf("\n%c|%c|%c\n%c|%c|%c\n%c|%c|%c\n\n",gu8arr_arr[0],gu8arr_arr[1],gu8arr_arr[2],gu8arr_arr[3],gu8arr_arr[4],gu8arr_arr[5],gu8arr_arr[6],gu8arr_arr[7],gu8arr_arr[8]);
}

/*
First player function to select who will play first X or O and return 0 for X player and 1 for O player
*/
uint8_t First_player()
{
    uint8_t player;
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

/* the game function, will control all the program */
void play_XO()
{
    game_Instrction();        // print the instruction first
    gu8_player_turn = First_player(); // to adjust the turn based on the first player

    while(1)
    {
    printf("select number from 1 to 9\n");
    uint8_t input;
    scanf("%d",&input);
    /*
        check the input selection from 1 to 9
    */
    switch(input)
    {
    case 1:
        if(gu8arr_arr[0]==' ')
        {
            /*
                adjust the selection by reminder operation as if the turn divisible by 2 so its X turn else O turn
            */
            gu8arr_arr[0]=gu8arr_turn[gu8_player_turn%2];
            gu8_player_turn++;
            pattern();
            if (check_winner()==0)  return 0;
        }
        else
            printf("busy location, select another one ");
            break;
    case 2:
        if(gu8arr_arr[1]==' ')
        {
            gu8arr_arr[1]=gu8arr_turn[gu8_player_turn%2];
            gu8_player_turn++;
            pattern();
            if (check_winner()==0)  return 0;
        }
        else
            printf("busy location, select another one ");
             break;
    case 3:
        if(gu8arr_arr[2]==' ')
        {
            gu8arr_arr[2]=gu8arr_turn[gu8_player_turn%2];
            gu8_player_turn++;
            pattern();
            if (check_winner()==0)  return 0;

        }
        else
            printf("busy location, select another one ");
             break;
    case 4:
        if(gu8arr_arr[3]==' ')
        {
            gu8arr_arr[3]=gu8arr_turn[gu8_player_turn%2];
            gu8_player_turn++;
            pattern();
            if (check_winner()==0)  return 0;

        }
        else
            printf("busy location, select another one ");
             break;
    case 5:
        if(gu8arr_arr[4]==' ')
        {
            gu8arr_arr[4]=gu8arr_turn[gu8_player_turn%2];
            gu8_player_turn++;
            pattern();
            if (check_winner()==0)  return 0;
        }
        else
            printf("busy location, select another one ");
             break;
    case 6:
        if(gu8arr_arr[5]==' ')
        {
            gu8arr_arr[5]=gu8arr_turn[gu8_player_turn%2];
            gu8_player_turn++;
            pattern();
           if (check_winner()==0)  return 0;
        }
        else
            printf("busy location, select another one ");
             break;

    case 7:
        if(gu8arr_arr[6]==' ')
        {
            gu8arr_arr[6]=gu8arr_turn[gu8_player_turn%2];
            gu8_player_turn++;
            pattern();
            if (check_winner()==0)  return 0;
        }
        else
            printf("busy location, select another one ");
             break;
    case 8:
        if(gu8arr_arr[7]==' ')
        {
            gu8arr_arr[7]=gu8arr_turn[gu8_player_turn%2];
            gu8_player_turn++;
            pattern();
            if (check_winner()==0)  return 0;
        }
        else
            printf("busy location, select another one ");
             break;
    case 9:
        if(gu8arr_arr[8]==' ')
        {
            gu8arr_arr[8]=gu8arr_turn[gu8_player_turn%2];
            gu8_player_turn++;
            pattern();
            if (check_winner()==0)  return 0;

        }
        else
            printf("busy location, select another one ");
             break;

    default :
        printf("wrong number, select another one ");
    }
    }
}

/*
check the winner X or O or game over and return 0 if the game ends
*/
uint8_t check_winner()
{
    /* check the 3 rows if equal X is the winner */
    if((gu8arr_arr[0]==gu8arr_arr[1]&&gu8arr_arr[1]==gu8arr_arr[2]&&gu8arr_arr[2]=='X')||(gu8arr_arr[3]==gu8arr_arr[4]&&gu8arr_arr[4]==gu8arr_arr[5]&&gu8arr_arr[5]=='X')||(gu8arr_arr[6]==gu8arr_arr[7]&&gu8arr_arr[7]==gu8arr_arr[8]&&gu8arr_arr[8]=='X'))
    {
        printf("\n*********X-player win*********\n");
        return 0;
    }

    /* check the 3 columns if equal X is the winner */
    else if((gu8arr_arr[0]==gu8arr_arr[3]&&gu8arr_arr[3]==gu8arr_arr[6]&&gu8arr_arr[6]=='X')||(gu8arr_arr[1]==gu8arr_arr[4]&&gu8arr_arr[4]==gu8arr_arr[7]&&gu8arr_arr[7]=='X')||(gu8arr_arr[2]==gu8arr_arr[5]&&gu8arr_arr[5]==gu8arr_arr[8]&&gu8arr_arr[8]=='X'))
    {
        printf("\n*********X-player win*********\n");
        return 0;
    }

    /* check the 2 diagonals if equal X is the winner */
    else if((gu8arr_arr[0]==gu8arr_arr[4]&&gu8arr_arr[4]==gu8arr_arr[8]&&gu8arr_arr[8]=='X')||(gu8arr_arr[2]==gu8arr_arr[4]&&gu8arr_arr[4]==gu8arr_arr[6]&&gu8arr_arr[6]=='X'))
    {
        printf("\n*********X-player win*********\n");
        return 0;
    }

    /* check the 3 rows if equal O is the winner */
    else if((gu8arr_arr[0]==gu8arr_arr[1]&&gu8arr_arr[1]==gu8arr_arr[2]&&gu8arr_arr[2]=='O')||(gu8arr_arr[3]==gu8arr_arr[4]&&gu8arr_arr[4]==gu8arr_arr[5]&&gu8arr_arr[5]=='O')||(gu8arr_arr[6]==gu8arr_arr[7]&&gu8arr_arr[7]==gu8arr_arr[8]&&gu8arr_arr[8]=='O'))
    {
        printf("\n*********O-player win*********\n");
        return 0;
    }

    /* check the 3 columns if equal O is the winner */
    else if((gu8arr_arr[0]==gu8arr_arr[3]&&gu8arr_arr[3]==gu8arr_arr[6]&&gu8arr_arr[6]=='O')||(gu8arr_arr[1]==gu8arr_arr[4]&&gu8arr_arr[4]==gu8arr_arr[7]&&gu8arr_arr[7]=='O')||(gu8arr_arr[2]==gu8arr_arr[5]&&gu8arr_arr[5]==gu8arr_arr[8]&&gu8arr_arr[8]=='O'))
    {
        printf("\n*********O-player win*********\n");
        return 0;
    }

    /* check the 2 diagonals if equal O is the winner */
    else if((gu8arr_arr[0]==gu8arr_arr[4]&&gu8arr_arr[4]==gu8arr_arr[8]&&gu8arr_arr[8]=='O')||(gu8arr_arr[2]==gu8arr_arr[4]&&gu8arr_arr[4]==gu8arr_arr[6]&&gu8arr_arr[6]=='O'))
    {
        printf("\n*********O-player win*********\n");
        return 0;
    }

    /* check the pattern is full then no winner and the game is over*/
    else if(gu8arr_arr[0]!=' '&&gu8arr_arr[1]!=' '&&gu8arr_arr[2]!=' '&&gu8arr_arr[3]!=' '&&gu8arr_arr[4]!=' '&&gu8arr_arr[5]!=' '&&gu8arr_arr[6]!=' '&&gu8arr_arr[7]!=' '&&gu8arr_arr[8]!=' ')
    {

        printf("\n***********GAME OVER************\n");
        return 0;
    }

}
