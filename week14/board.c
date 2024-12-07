//
//  board.c
//  sharkGame
//

#include "board.h"

// ----- EX. 3 : board ------------
#define N_COINPOS       12
#define MAX_COIN        4
// ----- EX. 3 : board ------------
// ----- EX. 5 : shark ------------
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4
// ----- EX. 5 : shark ------------
// ----- EX. 3 : board ------------
static int board_coin[N_BOARD];
static int board_status[N_BOARD]; //0 - OK, 1 - destroyed
// ----- EX. 3 : board ------------


static int shark_position;

// ----- EX. 3 : board ------------
void board_printBoardStatus(void)
{
    int i;
    
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        if (board_status[i] == BOARDSTATUS_NOK)
            printf("X");
        else
            printf("O");
    }
    printf("|\n");
    printf("------------------------------------------------------------\n");
}

int board_initBoard(void)
{
    int i;
    
    //variable initialization
    for (i=0;i<N_BOARD;i++)
    {
        board_status[i] = BOARDSTATUS_OK;
        board_coin[i] = 0;
    }
    
// ----- EX. 5 : shark ------------
    shark_position = SHARK_INITPOS;
// ----- EX. 5 : shark ------------

    //coin allocation
srand(time(NULL));


    int coin_allocated=0;
    while (coin_allocated<N_BOARD)
    { int random_pos = rand()% N_BOARD; 
		if (board_coin[random_pos]==0)
		{
			//번째 coin 할당
			board_coin[random_pos]=rand() % MAX_COIN +1; 
			coin_allocated++;
		 } 
	}
    
    return N_COINPOS;
}
// ----- EX. 3 : board ------------


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{
int shark_step= rand() % MAX_SHARKSTEP+1; 
shark_position += shark_step;

if (shark_position >= N_BOARD) {
        shark_position = N_BOARD - 1; // Limit to the last position on the board
    }

    // Update the board status for the shark's new position
    board_status[shark_position] = SHARK_INITPOS;

    // Optionally, reset the previous position to its default status (e.g., EMPTY)
    // You would need to track the shark's previous position for this:
    // board_status[previous_shark_position] = EMPTY;

    return shark_step; // Return the number of steps moved

}
// ----- EX. 5 : shark ------------


// ----- EX. 3 : board ------------
int board_getBoardStatus(int pos)
{
    return board_status[pos];
}

int board_getBoardCoin(int pos)
{
    int coin = board_coin[pos];
    board_coin[pos] = 0;
    return coin;
}
// ----- EX. 3 : board ------------
