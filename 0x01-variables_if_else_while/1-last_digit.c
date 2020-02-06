#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char str1[] = "Last digit of";
	char str2[] = "is";
	char str3[] = "and is greater than 5";
	char str4[] = "and is 0";
	char str5[] = "and is less than 6 and not 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int x = n % 10;

	if (x == 0)
	printf("%s %d %s %d %s\n", str1, n, str2, x, str4);
	else if (x > 5)
	printf("%s %d %s %x %s\n", str1, n, str2, x, str3);
	else
	printf("%s %d %s %x %s\n", str1, n, str2, x, str5);
	return (0);

}
