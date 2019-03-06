#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - allocates an arry of width * height to 0
 * @width: width
 * @height: height
 *
 * Return: NULL if error, pointer to array if not
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **p;
	int k;
	int l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
/* malloc starts here */
	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		p[k] = malloc(width * sizeof(int));
		if (p[k] == NULL)
		{
			for (l = 0; l < k; l++)
			{
				free(p[k]);
			}
			free(p);
			return (NULL);
		}
	}
/* malloc ends here */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
