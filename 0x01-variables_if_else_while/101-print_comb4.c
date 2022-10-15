#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int hunds;
	int tens;
	int ones;

	for (hunds = '0'; hunds <= '9'; hunds++)
	{
		for (tens = (hunds + 1); tens <= '9'; tens++)
		{
			for (ones = (tens + 1); ones <= '9'; ones++)
			{
				putchar(hunds);
				putchar(tens);
				putchar(ones);

				if (hunds != '7' || tens != '8' || ones != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
