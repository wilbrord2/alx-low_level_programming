#include<stdio.h>
#include<stdlib.h>

/**
 * main - function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	for(i= 1; i < 90; i++)
	{
	        putchar((i / 10) + '0');
        	putchar((i % 10) + '0');
	
        	if (i  != 89)
		{
	        	putchar(',');
		        putchar(' ');
	        }
	}
	putchar('\n');
	return (0);
}
