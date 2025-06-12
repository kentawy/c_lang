#include <stdio.h>
#include "windows.h"

// Прототипи функцій
void initBoard();
void printBoard();
int checkWin();
int isDraw();
int makeMove(char player);

// Глобальна змінна поля
char board[3][3];

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char player = 'X';
	initBoard();

	while (1)
	{
		printBoard();
		if (!makeMove(player))
			continue;

		if (checkWin())
		{
			printBoard();
			printf("Гравець %c переміг!\n", player);
			break;
		}

		if (isDraw())
		{
			printBoard();
			printf("Нічия!\n");
			break;
		}

		player = (player == 'X') ? 'O' : 'X';
	}

	return 0;
}

// Реалізації функцій

void initBoard()
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			board[i][j] = '1' + i * 3 + j;
}

void printBoard()
{
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i < 2)
			printf("---|---|---\n");
	}
	printf("\n");
}

int checkWin()
{
	for (int i = 0; i < 3; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
			return 1;
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
			return 1;
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
		return 1;
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
		return 1;
	return 0;
}

int isDraw()
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (board[i][j] != 'X' && board[i][j] != 'O')
				return 0;
	return 1;
}

int makeMove(char player)
{
	int choice;
	printf("Гравець %c, введіть номер клітинки (1-9): ", player);
	scanf("%d", &choice);

	if (choice < 1 || choice > 9)
	{
		printf("Неправильний номер. Спробуйте ще раз.\n");
		return 0;
	}

	int row = (choice - 1) / 3;
	int col = (choice - 1) % 3;

	if (board[row][col] == 'X' || board[row][col] == 'O')
	{
		printf("Клітинка вже зайнята. Спробуйте іншу.\n");
		return 0;
	}

	board[row][col] = player;
	return 1;
}
