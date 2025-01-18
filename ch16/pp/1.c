#include <stdio.h>
#include <stdbool.h>

struct dialing_code
{
  char *country;
  int code;
};

int main(void)
{
  const struct dialing_code country_codes[] = 
  {
    {"Argentina",						 54}, {"Bangladesh",			 880}, 
    {"Brazil",							 55}, {"Burma (Myanmar)",		95}, 
    {"China",								 86},	{"Colombia",					57}, 
    {"Congo, Dem. Rep. of",	243}, {"Egypt",							20}, 
    {"Ethiopia",						251}, {"France",						33}, 
    {"Germany",							 49}, {"India",							91}, 
    {"Indonesia",						 62}, {"Iran",							98}, 
    {"Italy",						 		 39}, {"Japan",							81}, 
    {"Mexico",						 	 52}, {"Nigeria",					 234}, 
    {"Pakistan",						 92}, {"Philippines",			  63}, 
    {"Poland",							 48}, {"Russia",					   7}, 
    {"South Africa",				 27}, {"South Korea",			  82}, 
    {"Spain",								 34}, {"Sudan",						 249}, 
    {"Thailand",						 66}, {"Turkey",					  90}, 
    {"Ukraine",						  380}, {"United Kingdom", 		44}, 
    {"United States",		  		1}, {"Vietnam", 					84}, 
  };

  int input;
  char c_input;
  char char_input;
  bool break_flag = false;

  for (;;)
  {
    printf("Enter an international dialing code, or enter 0 to quit: ");

    scanf("%d", &input);

    if (input == 0) break;

    for (int i = 0; i < sizeof(country_codes) / sizeof(country_codes[0]); i++)
    {
      if (country_codes[i].code == input)
      {
	printf("Dialing code %d is country %s\n\n", input, country_codes[i].country);
	break_flag = true;
	break;
      }
    }

    if (!break_flag)
    {
      printf("Found no match for dialing code %d.\n\n", input); 
    }
  }

  return 0;
}

