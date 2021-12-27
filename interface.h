/* Initializing Global variable */
extern uint8_t gu8arr_arr[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
extern uint8_t gu8arr_turn[] = {'X','O'};
extern uint8_t gu8_player_turn=0;

/*Declaration of some functions*/
extern void game_Instrction();
extern void pattern();
extern uint8_t First_player();
extern uint8_t check_winner();
extern void play_XO();
