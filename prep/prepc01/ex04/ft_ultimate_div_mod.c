#include <stdio.h>

void	ft_div_mod(int *a, int *b)
{
	int	copya;
	int	copyb;

	copya = *a;
	copyb = *b;
	*a = copya / copyb;
	*b = copya % copyb;
	printf("%d\n", *a);
	printf("%d\n", *b);
}
int main()
{
	int a; 
	int b;

	a = 10;
	b = 3;

	ft_div_mod(&a, &b);
}