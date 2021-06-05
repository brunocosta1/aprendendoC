#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char pos[10];
int cont = 0;
int winner = 0;  // 0 if a tie, 1 if player1 is winner and 2 if player2 is winner
int playermove = 1; // 1 if is the move player 1, 2 if is the move player 2



int who_win()
{
	if(playermove = 1)
	{
		winner = 1;
	}
	else
	{
		winner = 2;
	}

	return winner;
}


bool have_winner()
{
	int i;

	//Analyzing the lines
	
	for(i = 1; i <= 7; i += 3)
	{
		if(pos[i] == pos[i+1] && pos[i] == pos[i+2])
		{
			
			who_win();	
			return true;
		}
	}
	
	//Analyzing the columns
	
	for(i = 1; i <= 3; ++i)
	{
		if(pos[i] == pos[i+3] && pos[i] == pos[i+6])
		{
			who_win();
			return true;
		}
		
	}	

	//Analyzing the diagonals
	
	if((pos[1] == pos[5] && pos[1] == pos [9]) || (pos[3] == pos[5] && pos[3] == pos[7]))
	{
		who_win();
		return true;
	}

	return false;
}
void board()
{
	printf("Tic Tac Toe Game");
	printf("\n");
	printf("Player 1 (X) - Player 2 (O)");
	printf("\n\n");
	
	printf(" %c |", pos[1]);
	printf(" %c |", pos[2]);
	printf(" %c |\n", pos[3]);
	printf("--- ");
	printf("--- ");
	printf("---\n");
	
	printf(" %c |", pos[4]);
	printf(" %c |", pos[5]);
	printf(" %c |\n", pos[6]);
	printf("--- ");
	printf("--- ");
	printf("---\n");

	printf(" %c |", pos[7]);
	printf(" %c |", pos[8]);
	printf(" %c |", pos[9]);

	printf("\n\n");
}

void move(int a)
{
	
	if(playermove == 1)
	{
		switch(a)
			{
				case 1:
					pos[1] = 'X';
					break;
				case 2:
					pos[2] = 'X';
					break;
				case 3:
					pos[3] = 'X';
					break;
				case 4:
					pos[4] = 'X';
					break;
				case 5:
					pos[5] = 'X';
					break;
				case 6:
					pos[6] = 'X';
					break;
				case 7:
					pos[7] = 'X';
					break;
				case 8:
					pos[8] = 'X';
					break;
				case 9:
					pos[9] = 'X';
					break;
			}

	}
	else
	{
			switch(a)
			{
				case 1:
					pos[1] = 'O';
					break;
				case 2:
					pos[2] = 'O';
					break;
				case 3:
					pos[3] = 'O';
					break;
				case 4:
					pos[4] = 'O';
					break;
				case 5:
					pos[5] = 'O';
					break;
				case 6:
					pos[6] = 'O';
					break; 
				case 7:
					pos[7] = 'O';
					break;
				case 8:	
					pos[8] = 'O';
					break;
				case 9:
					pos[9] = 'O';
					break;
			}
	}
}

int verify(int b)
{
	
	if(b <= 0 || b > 10)
	{
		printf("Invalid move.\n");
		return -1;
	}
	else if(pos[b] == 'X' || pos[b] == 'O')
	{
		printf("Invalid move.\n");
		return -1;
	}
	else
	{
		printf("Invalid move.");
		return -1;
	
	
	}
}

void make_your_move()
{
	int mov = 0;
	
	if(playermove == 1)
	{
	
		printf("Player 1 move: ");
		scanf("%d", &mov);
		if(verify(mov) == -1)
		{
			return;
		}	
		else
		{
			move(mov);
			playermove = 2;
		}
	
	}
	else
	{
		printf("Player 2 move:");
		scanf("%d", &mov);
		
		if(verify(mov) == -1)
		{
			return;
		}
		else
		{
			move(mov);
			playermove = 1;
		}
	}
	
	



	

}

int main()
{
	pos[1] = '1';
	pos[2] = '2';
	pos[3] = '3';
	pos[4] = '4'; 
	pos[5] = '5';
	pos[6] = '6';
	pos[7] = '7';
	pos[8] = '8'; 
	pos[9] = '9';





	

	do	
	{
		system("clear");
		board();
		
		make_your_move();	
				
		system("sleep 2");	
	}while(!have_winner());
	
	system("clear");	
	board();

	if(winner == 0)
	{
		printf("The match was a draw.\n");
	}
	else
	{
		printf("Player %d wins!", who_win());	
	}	
	
	
	
	return 0;
}
