#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * Description: Print all possible different combinations of 3 digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * The 3 digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination.
 * print only the smallest combination of 3 digits.
 * Numbers should be printed in ascending order.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 6 times.
 * You are not allowed to use any variables of type `char`.
 * Return: 0
 */
int main(void)
{
	int i, j, k;
	int i, j, k, l;

	i = 0;

	while (i < 100)
	for (i = 0; i < 1000; i++)
	{
		j = i % 10; /* singles digit */
		k = i / 10; /* doubles digit */
		j = i / 100; /* hundreds */
		k = (i / 10) % 10; /* tens */
		l = i % 10; /* singles */

		if (k < j)
		if (j < k && k < l)
		{
			putchar(k + '0');
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 89)
			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}
	putchar('\n');
