//maintains a parts database (array version)

#include <stdio.h>
#include "readline.h"
#include <string.h>

#define NAME_LEN 25
#define MAX_PARTS 100

struct part
{
	int number;
	char name[NAME_LEN+1];
	int on_hand;
	float price;
} inventory[MAX_PARTS];

int num_parts = 3; //number of parts currently stored

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

// main:	prompts the user to enter an operation code,
// 	then calls a function to perform the requested 
// 	action. repeats until the user enters the 
// 	command 'q'. prints an error message if the user
// 	enters an illegal code.

int main(void)
{
	inventory[0].number = 3;
	strcpy(inventory[0].name, "horse");
	inventory[0].on_hand = 1;

	inventory[1].number = 1;
	strcpy(inventory[1].name, "taz");
	inventory[1].on_hand = 88;

	inventory[2].number = 2;
	strcpy(inventory[2].name, "sup");
	inventory[2].on_hand = 17;
  char code;

  for (;;) 
  {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n') //skips to end of line
      ;

    switch (code)
    {
      case 'i':		insert();
			break;

      case 's':		search();
			break;

      case 'u':		update();
			break;

      case 'p':		print();
			break;

      case 'q':		return 0;

      default:		printf("Illegal code\n");	
    }
    printf("\n");		
  }
}

// find_part:	looks up a part number in the inventory
// 	array. returns the array index if the part
// 	number is found; otherwise, returns -1.
int find_part(int number)
{
  int i;

  for (i = 0; i < num_parts; i++)
  {
    if (inventory[i].number == number)
    {
      return i;
    }
  }
	return -1;
}

// insert:	prompts the user for information about a new
// 	part and then inserts the part into the
// 	database. prints an error message and returns 
// 	prematurely if the part already exists or the 
// 	database is full.
void insert(void)
{
  int part_number;

  if (num_parts == MAX_PARTS)
  {
    printf("Database is full; can't add more parts.\n");
    return;
  }

  printf("Enter part number: ");
  scanf("%d", &part_number);

  if (find_part(part_number) >= 0)
  {
    printf("Part already exists.\n");
    return;
  }



  inventory[num_parts].number = part_number;
  printf("Enter part name: ");
  read_line(inventory[num_parts].name, NAME_LEN);
	printf("Enter price: $");
	scanf("%f", &inventory[num_parts].price);
  printf("Enter quantity on hand: ");
  scanf("%d", &inventory[num_parts].on_hand);
  num_parts++;
}

// search:	prompts the user to enter a part number,
// 	then looks up the part in the database. if the part 
// 	exists, prints the name and quantity on hand; 
// 	if not, prints an error message.
void search(void)
{
  int i, number;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number);
  if (i >= 0)
  {
    printf("Part name: %s\n", inventory[i].name);
    printf("Quantity on hand: %d\n", inventory[i].on_hand);
    printf("Price: $%f", inventory[i].price);
  }
  else
  {
    printf("Part not found.\n");
  }
}

// update:		prompts the user to enter a part number.
// 	prints an error messagee if the part doesn't
// 	exist; otherwise, prompts the user to enter 
// 	change in quantity on hand and updates the database.
void update(void)
{
  int i, number, q_change, p_change;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number);
  if (i >= 0)
  {
    printf("Enter change in quantity on hand (0 for no change): ");
    scanf("%d", &q_change);
    inventory[i].on_hand += q_change;

    printf("Enter change in price (0 for no change): ");
    scanf("%d", &p_change);
    inventory[i].price += p_change;
  }
  else
  {
    printf("Part not found.\n");
  }
}

int split(int low, int high)
{
	struct part partition = inventory[low];

	for (;;)
	{
		while (low < high && partition.number < inventory[high].number)
		{
			high--;
		}

		if (low >= high)
		{
			break;
		}

		inventory[low++] = inventory[high];

		while (low < high && inventory[low].number < partition.number)
		{
			low++;
		}

		if (low >= high)
		{
			break;
		}

		inventory[high--] = inventory[low];
	}

	inventory[high] = partition;

	return high;
};

void quicksort(int low, int high)
{

	int middle;

	if (low >= high)
	{
		return;
	}

	middle = split(low, high);

	quicksort(low, middle - 1);
	quicksort(middle + 1, high);

};
// print:	prints a listing of all parts in the database,
// 	showing the part number, part name, and
// 	quantity on hand. parts are printed in the 
// 	order in which they were entered into the
// 	database.
void print(void)
{
  int i;

	quicksort(0, num_parts-1);

  for (i = 0; i < num_parts; i++)
  {
		printf("%-15s%-25s%-10s%-15s\n", "Part Number", "Part Name", "Price", "Quantity on Hand");
		printf(("%-15d%-25s$%-9.2f%-15d\n"), inventory[i].number,
				inventory[i].name, inventory[i].price, inventory[i].on_hand);
	}
}


