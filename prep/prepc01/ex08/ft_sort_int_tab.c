#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	j = size;
	i = 0;
	while (++i < j)
	{
		if (tab[i] < tab[i - 1])
		{
			temp = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = temp;
			i = 0;
		}
	}
}

int	main(void)
{
	int	size;
	int i;

	size = 5;
	i = 0;
	int	array[5] = {8, 9, 3, 2, 1};
	ft_sort_int_tab(array, size);
	while (i < size)
	{
		printf("%i", array[i]);
		i++;
	}
	
}