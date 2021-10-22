#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
	printf("%d\n", *********nbr);
}


int main()
{
	int i;
	int *one, **two, ***tre, ****four, *****five;
	int ******six, *******seven, ********eight, *********nbr; 

	i = 4;
	one = &i;
	two = &one;
	tre = &two;
	four = &tre;
	five = &four;
	six = &five;
	seven = &six;
	eight = &seven;
	nbr = &eight;
	ft_ultimate_ft(nbr);	
}