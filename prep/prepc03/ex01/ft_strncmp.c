#include <stdio.h>

int	ft_strcmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (i < n)
	{	
		if (*s1 < *s2)
			return (-1);
		else if (*s1 > *s2)
			return (1);
		else if (*s1 == *s2)
		{
			
		}
		s1++;
		s2++;
		i++;	
	}
	return (0);
}


int	main(void)
{
	char one[20] = "anaa";
	char two[20] = "anaa";
	
	printf("%d", ft_strcmp(one, two, 7));
}
