#include <stdio.h>

int evaluate_position(char board[8][8]);

int main(void)
{
	printf("\n\n\n");

	char board[8][8] = {	{'N', 'n', 'b', ' ', ' ', ' ', 'r', ' '},
				{' ', 'p', ' ', ' ', ' ', ' ', 'p', ' '},
				{'p', ' ', ' ', 'B', ' ', ' ', 'k', 'p'},
				{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
				{' ', ' ', ' ', ' ', 'n', ' ', ' ', ' '},
				{' ', ' ', ' ', 'R', ' ', 'q', ' ', ' '},
				{' ', ' ', ' ', ' ', ' ', ' ', 'P', 'P'},
				{' ', ' ', ' ', ' ', ' ', 'R', 'K', ' '}	};

	int result = evaluate_position(board);

	if (result > 0)
		printf("Result: %d\nWhite wins\n", result);
	else if (result < 0)
		printf("Result: %d\nBlack wins\n", result);
	else
		printf("tie\n");

	printf("\n\n\n");

	return 0;
}

int evaluate_position(char board[8][8])
{
	int score = 0;

	for (char *p = (char *) board; p < (char *) board + 8 * 8; p++) {
		if (*p != ' ' && *p != 'K' && *p != 'k') {
			switch (*p) {
				case 'Q': score += 9; break;
				case 'R': score += 5; break;
				case 'N': score += 3; break;
				case 'B': score += 3; break;
				case 'P': score += 1; break;
				case 'q': score -= 9; break;
				case 'r': score -= 5; break;
				case 'n': score -= 3; break;
				case 'b': score -= 3; break;
				case 'p': score -= 1; break;
				default: printf("whoops: %c\n", *p); break;
			}
		}
	}

	return score;
}
	
