#include <stdio.h>

typedef enum {PAWN = 1, KNIGHT, BISHOP, ROOK, QUEEN, KING} Piece;
typedef enum {BLACK, WHITE} Color;

typedef struct
{
	Piece piece;
	Color color;
} Square;

int main(void)
{
  printf("\n\n\n");

	Square board[8][8] = 
	{ 
		{{ROOK, BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, {QUEEN, BLACK}, {KING, BLACK}, 
			{BISHOP, BLACK}, {KNIGHT, BLACK}, {ROOK, BLACK}},

		{{PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, 
			{PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}},

		{{0, BLACK}, {0, BLACK}, {0, BLACK}, {0, BLACK}, {0, BLACK}, 
			{0, BLACK}, {0, BLACK}, {0, BLACK}},

		{{0, BLACK}, {0, BLACK}, {0, BLACK}, {0, BLACK}, {0, BLACK}, 
			{0, BLACK}, {0, BLACK}, {0, BLACK}},

		{{0, BLACK}, {0, BLACK}, {0, BLACK}, {0, BLACK}, {0, BLACK}, 
			{0, BLACK}, {0, BLACK}, {0, BLACK}},

		{{0, BLACK}, {0, BLACK}, {0, BLACK}, {0, BLACK}, {0, BLACK}, 
			{0, BLACK}, {0, BLACK}, {0, BLACK}},

		{{PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, 
			{PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}},

		{{ROOK, WHITE}, {KNIGHT, WHITE}, {BISHOP, WHITE}, {QUEEN, WHITE}, {KING, WHITE}, 
			{BISHOP, WHITE}, {KNIGHT, WHITE}, {ROOK, WHITE}}
	};

	printf("%lu", sizeof(board[0][0]));

  printf("\n\n\n");
  return 0;
}
