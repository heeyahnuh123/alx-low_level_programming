#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - countdown of alphabets
 * from a - z separated by newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	for (n = 'a'; n = 'z'; n++)
		putchar(n);
		putchar('\n');
		getch();

	return (0);
}
