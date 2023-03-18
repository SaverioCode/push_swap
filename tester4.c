#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libps/push_swap.h"
#include "libps/ft_moves/moves.h"

int main()
{
	// int x[8] = {109, 40, -128, 196, -151, -245, -166, 19};
	// int	*arr;
	// int	n = 8;
	// int	i = 0;

	// arr = x;
	// ft_rb(arr, n, 1);
	// while (i < n)
	// {
	// 	printf("%d ", arr[i]);
	// 	i++;
	// }
	// int **a_and_b;
	// int *a = malloc(3 * 4);
	// int	*b = malloc(3 * 4);
	// a_and_b = malloc(2 * 8);
	// int	i = -1;
	// while (++i < 3)
	// {
	// 	a[i] = i + 1;
	// 	b[i] = i + 4;
	// }
	// a_and_b[0] = a;
	// a_and_b[1] = b;
	// i = -1;
	// while (++i < 3)
	// 	printf("%d ", a_and_b[1][i]);
	// printf("\n");
	// i = -1;
	// while (++i < 3)
	// 	printf("%d ", a_and_b[0][i]);
	// printf("\n");
	// free(a_and_b);
	// free(a);
	// free(b);
	char *str = "ciao";
	write(1, str, 1);
	write(1, str + 1, 1);
	write(1, "\n", 1);
	printf("%c%c\n", *str, *(str + 1));
	if (*(str + 4))
		write(1, "WTF\n", 4);
	return (0);
}
