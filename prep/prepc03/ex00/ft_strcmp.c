#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ( *s1 != '\0' || *s2 != '\0')
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
	}
	return (0);
}


int	main(void)
{
	char one[20] = "alaa";
	char two[20] = "anaa";
	
	printf("%d", ft_strcmp(one, two));
}
