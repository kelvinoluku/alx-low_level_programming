#include <stdio.h>

/*
 * Main - Entry point
 * Return: Always 0 (success)
 */

int main(void)

{
	char h;

	h = 'a';
	while (h <= 'z')
	{
		if ((h != 'e') && (h != 'q'))
		{

			putchar(h);
			h++;
		}
		else
		{
			h++;
		}
	}
	putchar('\n');
	return (0);
}
