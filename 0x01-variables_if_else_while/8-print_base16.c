#include <stdio.h>
/**
 * main - print if the number is positive, zero, negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, negative
 * Return: 0
 */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
