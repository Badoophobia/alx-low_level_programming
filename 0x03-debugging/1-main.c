#include <stdio.h>
/**
 * main - causes an infinite loop
 *
 * Return: 0
 */
int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	i = 0;

/*
 * while (i < 10)
 * {
 * infinite loop - No increase of variable
 * putchar(1);
 }
 */

printf("infinite loop avoided! \\o/\n");
return (0);
}
