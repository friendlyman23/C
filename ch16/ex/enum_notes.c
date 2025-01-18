#include <stdio.h>

enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};
//or
typedef enum {CLUBS, DIAMONDS, HEARTS, SPADES} Suit;

//enum constants are automatically allocated int values starting at 0
//or may assign them ourselves
enum suit {CLUBS = 1, DIAMONDS = 2, HEARTS = 3, SPADES = 4};



int main(void)
{
  printf("\n\n\n");

	//if enum declared without typedef
	enum suit s1, s2;

	//if enum declared with typedef
	Suit s1, s2;





	

  printf("\n\n\n");
  return 0;
}
