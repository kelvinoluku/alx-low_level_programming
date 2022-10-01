#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments passed to program
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int args, char *argv[]) 
{
	int i = 0;
	for (i = 0; i < args; i++)
		printf("\n%s", argv[i]);
	return 0;
}
