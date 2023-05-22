/*
*File: 100-print_comb.c
*
*/
#include <stdio.h>
/**
*main - prints all possible combinations of single-digit numbers
*
*Return: Always 0.
*/
int main(void)
{
int num;
for (num = 0; num <= 89; num++)
{
putchar((num % 10) + '0');
if (num == 89)
continue;
putchar(',');
putchar('0');
}
putchar('\n');
return (0);
}
