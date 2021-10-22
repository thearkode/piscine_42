#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int content;

	content = *a;
	*a = *b;
	*b = content;

}
int main(void)
{
	int a;
	int b;

	a = 42;
	b = 21;
	ft_swap(&a,&b);
	printf("%i %i", a, b);
}