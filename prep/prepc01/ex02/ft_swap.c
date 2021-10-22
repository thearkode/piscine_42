#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int content = *a;
	*a = *b;
	*b = content;
	printf("%d\n", *a);
	printf("%d\n", *b);
}

int main()
{
	int a; 
	int b;

	a = 42;
	b = 17;
	ft_swap(&a, &b);
}