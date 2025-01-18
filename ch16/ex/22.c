#include <stdio.h>

int main(void)
{
  printf("\n\n\n");

	enum chess_pieces {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};
	
	//a.
	// const int piece_value[] = {200, 9, 5, 3, 3, 1};

	//b.
	const int piece_value[] = {[KING] = 200, [QUEEN] = 9, [ROOK] = 5, [BISHOP] = 3, [KNIGHT] = 3, [PAWN] = 1};

	for (int i = 0; i < sizeof(piece_value) / sizeof(piece_value[0]); i++)
	{
		printf("%d\n", piece_value[i]);
	}


  printf("\n\n\n");
  return 0;
}
