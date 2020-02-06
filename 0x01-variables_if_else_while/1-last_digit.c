#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	if(n == 0)
	print("Last digit of %d is %x and is 0", n, 0);
	 
	return (0);
}
