#include <stdio.h>

/**
 * main - A program to print alpha
 * @void: void
 *
 * Description: A program to print the combinations of 0-9 2 times
 * section header: stdio
 * Return: returns 0
 */

int main(void)
{
/**
 * comb_until - combines until
 * @arr: an arry with the values 0-9 in ascii code
 * @n: size of input array
 * @r: size of combination to be printed
 * @index: current index in data[]
 * @data: temp array to store current combination
 * @i: index of the current element in arr[]
 *
 * Description: A function to combine and print 0-9 n digits long
 * section header: stdio
 * Return: returns nothing, might make it void later
 */
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
/**
 * print_comb - Prints combinations.
 * @arr: Input array
 * @n: size of input array
 * @r: size of combination to be printed
 *
 * Description: Prints the combinations of 0-9 r times
 * Return: no return, might want to fix this later...
 */
	void print_comb(int arr[], int n, int r)
	{
		int data[r];

		comb_until(arr, n, r, 0, data, 0);
	}
/**
 * results - A function to call other functions to get results
 *
 * Description: a function to call other functions to get results
 * Return: 0
 */
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
