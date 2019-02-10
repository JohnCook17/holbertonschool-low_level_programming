#include <stdio.h>

/**
 * main - A program to print alpha
 * @void: void
 *
 * Description: A program to print the alphabet
 * section header: stdio
 * Return: returns 0
 */
int main(void)
{


	void comb_until(int arr[], int n, int r, int index, int data[], int i)
	{
		int j;
		int num;

		if (index == r)
		{
			for (j = 0; j < r; j++)
			{
				num = data[j];
				putchar(num);
			}
			if (i >= n && data[0] == 56 && data[1] == 57)
			{
				return;
			}
			putchar(44);
			putchar(32);
			return;
		}

		if (i >= n)
		{
			return;
		}
		data[index] = arr[i];
		comb_until(arr, n, r, index + 1, data, i + 1);
		comb_until(arr, n, r, index, data, i + 1);
	}

	void print_comb(int arr[], int n, int r)
	{
		int data[r];

		comb_until(arr, n, r, 0, data, 0);
	}

	int results(void)
	{
		int arr[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
		int r = 2;
		int n = sizeof(arr) / sizeof(arr[0]);

		print_comb(arr, n, r);
		return (0);
	}
	results();
	putchar('\n');
	return (0);
}
