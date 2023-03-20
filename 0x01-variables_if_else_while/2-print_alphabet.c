#include <stdio.h>
/**
 * main - main function that loops through the alphabets in lc
 *
 * Return: 0 when successful
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
