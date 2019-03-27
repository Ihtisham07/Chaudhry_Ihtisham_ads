#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<MMsystem.h>
#pragma comment( lib, "Winmm.lib" );
#define clrscr(); system("cls");




int a, b, choice;
char c[10] = { '1','2','3','4','5','6','7','8','9' };
char t1[20], t2[20];
void diagram();
int win();
void player1();
void player2();
void playernames();
void menu();
void game();
void song();
//void list();
//FILE *wins;


void main()
{
	
	printf("\n\n\t\t Players Enter Your Names For the Battle :P \n\n");
	playernames();
	clrscr();
	menu();
	clrscr();
}



void menu()
{
	printf("\n\n\t\t\t\t Welcome To Tic Toe ");
	printf("\n\n\t\t\t\t\t Menu \n");
	printf("\n\t\t\t Press 1 For A New Game :)				 \n");
	printf("\n\t\t\t Press 2 For List Of Winners So Far :D \n");
	printf("\n\t\t\t Press 3 For Exiting The Game :(		 \n");

	printf("\n\t\t\t Choose Your Option :->  ");
	scanf_s("%d", &choice);
	printf("\n\t\t\t\t Your Choice Is = %d \n", choice);

	switch (choice)
	{
	case 1: printf("\n\t\t\t You Have Choosen to Play the Game ");
		game();
		song();
		break;
	case 2: printf("\n\t\t You have Choosen to View The List of Winners %d", 2); 
		//list();
		break;

	case 3: printf("\n\t\t You Will be Exiting This Program %d", 3); 
		printf("\n Bye");
		break;

	default: printf("\n\n Your Choice Is Not Valid ");
	}
	 
}


//void list(void)
//{
	//FILE *win;
	//if (win == NULL)
	//{
		//printf("\n\n");
	//}
	// writing the winners name
	//wins = fopen_s("win.txt", "w");
	//putc(b, wins);

	// printing the name
	//printf("\n\n %c", wins);
	//fclose(wins);


//}


void playernames()
{
	
		printf("\n\n\t\t Player One Enter Your Name :->  ");
		gets(t1);
				
		printf("\n\n\t\t Player Two Enter Your Name :->  ");
		gets(t2);

	
	return t1, t2;
}

void song()
{
	PlaySound(TEXT("C:\\Users\\Nadeem\\source\\repos\\game\\playback.wav"), NULL, SND_SYNC);
	
}



void game()
{
	
	diagram();  //calling diagram function
	player1(); // calling player 1 function
	clrscr();
	diagram();  //calling diagram function
	player2(); //calling player 2 function
	clrscr();
	diagram();
	player1();
	clrscr();
	diagram();
	player2();
	clrscr();
	diagram();
	player1();
	clrscr();
	diagram();
	player2();
	clrscr();
	diagram();
	player1();
	clrscr();
	diagram();
	player2();
	clrscr();
	diagram();
	player1();
	clrscr();
	diagram();
	b = win();
	if (b == 1)
		printf("\n\n\n\n  Player %s Won", t1);
	if (b == 2)
		printf("\n\n\n\n  Player %s won", t2);
	if (b == 3)
		printf("\n\n\n\n  Match Is Drawn Between %s & %s", t1, t2);
	_getch();
	
}

void diagram()
{

	printf("\n\n\n\t\t******Welcome to Tic Toe Game Made by Ihtisham******");
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t        |     |    ");
	printf("\n\t\t\t     %c  |  %c  | %c", c[0], c[1], c[2]);
	printf("\n\t\t\t   _____|_____|_____");
	printf("\n\t\t\t        |     |");
	printf("\n\t\t\t     %c  |  %c  | %c", c[3], c[4], c[5]);
	printf("\n\t\t\t   _____|_____|_____");
	printf("\n\t\t\t        |     |");
	printf("\n\t\t\t     %c  |  %c  | %c", c[6], c[7], c[8]);
	printf("\n\t\t\t        |     |");
	printf("\n");
	printf("\n\n\n");
	printf("\n            Player %s is 'X' and player %s is 'O'",t1, t2);
}

void player1()
{
	printf("\n");
	b = win();
	if (b == 1 || b == 2)
		printf("");
	else 
	{
		printf("\n\n  Player %s Choose Your Box Wisely From 1 to 9 :->  " ,t1);
		scanf_s("%d", &a);
		switch (a) 
		{
		case 1:
			if (c[0] == 'X' || c[0] == 'O') 
			{
				printf("\nInvalid command");
				player1();
			}
			else
				c[0] = 'X';
			break;
		case 2:
			if (c[1] == 'X' || c[1] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player1();
			}
			else
				c[1] = 'X';
			break;
		case 3:
			if (c[2] == 'X' || c[2] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player1();
			}
			else
				c[2] = 'X';
			break;
		case 4:
			if (c[3] == 'X' || c[3] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player1();
			}
			else
				c[3] = 'X';
			break;
		case 5:
			if (c[4] == 'X' || c[4] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player1();
			}
			else
				c[4] = 'X';
			break;
		case 6:
			if (c[5] == 'X' || c[5] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player1();
			}
			else
				c[5] = 'X';
			break;
		case 7:
			if (c[6] == 'X' || c[6] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player1();
			}
			else
				c[6] = 'X';
			break;
		case 8:
			if (c[7] == 'X' || c[7] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player1();
			}
			else
				c[7] = 'X';
			break;
		case 9:
			if (c[8] == 'X' || c[8] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player1();
			}
			else
				c[8] = 'X';
			break;
		default:
			printf("\nInvalid command");
			player1();
		}
	}
}


void player2()
{
	printf("\n");
	b = win();
	if (b == 1 || b == 2)
		printf("");
	else {
		printf("\n\n  Player %s Choose Your Box Wisely From 1 to 9 :->  ", t2);
		scanf_s("%d", &a);
		switch (a) {
		case 1:
			if (c[0] == 'X' || c[0] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player2();
			}
			else
				c[0] = 'O';
			break;
		case 2:
			if (c[1] == 'X' || c[1] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player2();
			}
			else
				c[1] = 'O';
			break;
		case 3:
			if (c[2] == 'X' || c[2] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player2();
			}
			else
				c[2] = 'O';
			break;
		case 4:
			if (c[3] == 'X' || c[3] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player2();
			}
			else
				c[3] = 'O';
			break;
		case 5:
			if (c[4] == 'X' || c[4] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player2();
			}
			else
				c[4] = 'O';
			break;
		case 6:
			if (c[5] == 'X' || c[5] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player2();
			}
			else
				c[5] = 'O';
			break;
		case 7:
			if (c[6] == 'X' || c[6] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player2();
			}
			else
				c[6] = 'O';
			break;
		case 8:
			if (c[7] == 'X' || c[7] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player2();
			}
			else
				c[7] = 'O';
			break;
		case 9:
			if (c[8] == 'X' || c[8] == 'O') {
				printf("\n Invalid Command \n Location Is Already Marked");
				player2();
			}
			else
				c[8] = 'O';
			break;
		default:
			printf("\nInvalid Command");
			player2();
		}
	}
}


int win()
{
	if (c[0] == 'X' && c[1] == 'X' && c[2] == 'X')
		return 1;
	if (c[0] == 'X' && c[3] == 'X' && c[6] == 'X')
		return 1;
	if (c[0] == 'X' && c[4] == 'X' && c[8] == 'X')
		return 1;
	if (c[2] == 'X' && c[4] == 'X' && c[6] == 'X')
		return 1;
	if (c[1] == 'X' && c[4] == 'X' && c[7] == 'X')
		return 1;
	if (c[2] == 'X' && c[5] == 'X' && c[8] == 'X')
		return 1;
	if (c[3] == 'X' && c[4] == 'X' && c[5] == 'X')
		return 1;
	if (c[6] == 'X' && c[7] == 'X' && c[8] == 'X')
		return 1;
	if (c[0] == 'O' && c[1] == 'O' && c[2] == 'O')
		return 2;
	if (c[0] == 'O' && c[3] == 'O' && c[6] == 'O')
		return 2;
	if (c[0] == 'O' && c[4] == 'O' && c[8] == 'O')
		return 2;
	if (c[2] == 'O' && c[4] == 'O' && c[6] == 'O')
		return 2;
	if (c[1] == 'O' && c[4] == 'O' && c[7] == 'O')
		return 2;
	if (c[2] == 'O' && c[5] == 'O' && c[8] == 'O')
		return 2;
	if (c[3] == 'O' && c[4] == 'O' && c[5] == 'O')
		return 2;
	if (c[6] == 'O' && c[7] == 'O' && c[8] == 'O')
		return 2;
	if (c[0] != c[1] != c[2] != c[3] != c[4] != c[5] != c[6] != c[7] != c[8])
		return 3;
}
