#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - program that prints the alphabet in lowercase
* Return: 0 is returned
*/

int main(void)
{
	int m;
	/*@for pronts the alphabets*/
	for (m = 'a'; m <= 'z'; m++)

	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
