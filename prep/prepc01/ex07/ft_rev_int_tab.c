#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int j;
	int temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

int	main(void)
{
	int size;
	int i;

	i = 0;
	size = 5;
	int array[5] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(array, size);
	while (i < size)
	{
		printf("%i", array[i]);
		i++;
	}
	
}
