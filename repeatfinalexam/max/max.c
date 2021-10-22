#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int i = 0;
 	int big = tab[i];
	while (i <= len - 1)
	{
		if (tab[i] > big)
			big = tab[i];
		i++;
	}
	return (big);
}
int main(void)
{
	int go[256] = {0, 2, 3, 456, 789};
	printf("%i", max(go, 5));
}