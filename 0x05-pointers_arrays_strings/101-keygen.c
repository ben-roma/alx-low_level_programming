#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random passwords for the program 101-crackme.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0, diff = 2772;
	char c;

	srand((unsigned int) time(NULL));

	while (diff > 126) /* Tant que la différence est plus grande que le caractère ASCII maximal */
	{
		c = (rand() % (126 - 32 + 1)) + 32; /*Génère un caractère imprimable*/ 
		sum += c; // Ajoute la valeur ASCII du caractère à la somme
		if (sum > 2772)
		{
			sum -= c; /* Enlève le dernier caractère si la somme dépasse 2772*/
			continue;
		}
		diff -= c; /* Met à jour la différence requise*/
		printf("%c", c); /* Affiche le caractère */
	}

	/* Imprime le dernier caractère pour atteindre exactement la somme de 2772*/
	printf("%c\n", diff); /* Assure que le dernier caractère fait atteindre la somme exacte de 2772 */

	return (0);
}
