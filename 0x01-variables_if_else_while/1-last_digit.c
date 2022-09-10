nclude <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

		int n;
		 char last[] = "Last digit of"; 



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					print("%s %d is %d and is", last n, n % 10);
					if (n % 10 > 5)
					{
						printf("greater thab 5\n");
					}
					else if (n % 10 == 5)
					{
						printf("0\n");
					}
					else
					{
						printf("less than 6 abd not 0\n")


					return (0);
