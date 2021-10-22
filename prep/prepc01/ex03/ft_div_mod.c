#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int resultdiv;
	int resultmod;

	resultdiv = a / b;
	resultmod = a % b;
	*div = resultdiv;
	*mod = resultmod;
	printf("%d\n", *div);
	printf("%d\n", *mod);
}
int main()
{
	int a; 
	int b;
	int div;
	int mod;

	a = 10;
	b = 3;
	div = 45;
	mod = 30;

	ft_div_mod(a, b, &div, &mod);
}