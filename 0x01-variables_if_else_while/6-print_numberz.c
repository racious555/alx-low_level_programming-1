#include <stdio.h>
/**
 * main - entry point
 * Description: prints base 10 starting from 0
 * Return: 0
 */
int main(void)
{
int  c = 0;
while (c < 10)
{
putchar(48 + c);
c++;
}
putchar('\n');
return (0);
}
