#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libps/push_swap.h"
#include "libps/ft_moves/moves.h"

int main()
{
	int x[8] = {109, 40, -128, 196, -151, -245, -166, 19};
	int	*arr;
	int	n = 8;
	int	i = 0;

	arr = x;
	ft_rb(&arr, n);
	while (i < n)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}
