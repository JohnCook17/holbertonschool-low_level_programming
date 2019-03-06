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

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
/* malloc starts here */
	p = (int **)malloc(width * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < width; k++)
	{
		p[k] = (int *)malloc(height * sizeof(int));
		if (p[k] == NULL)
		{
			for (k = 0; k < height; k++)
			{
				free(p[k]);
			}
			free(p);
		}
	}
/* malloc ends here */
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
