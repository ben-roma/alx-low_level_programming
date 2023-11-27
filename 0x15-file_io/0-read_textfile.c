#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - Lit un fichier texte et l'affiche sur la sortie standard.
 * @filename: pointeur vers le nom du fichier.
 * @letters: Nombre de lettres que la fonction doit lire et imprimer.
 *
 * Retourne : Retourne 0 si le nom du fichier est NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_d, w_cnt, w_r;
	char *buffer;

	if (filename == NULL)
		return (0);

	f_d = open(filename, O_RDONLY);
	if (f_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(f_d);
		return (0);
	}

	w_r = read(f_d, buffer, letters);
	if (w_r == -1)
	{
		free(buffer);
		close(f_d);
		return (0);
	}

	w_cnt = write(STDOUT_FILENO, buffer, w_r);
	if (w_cnt == -1 || w_r != w_cnt)
	{
		free(buffer);
		close(f_d);
		return (0);
	}

	free(buffer);
	close(f_d);
	return (w_cnt);
}

