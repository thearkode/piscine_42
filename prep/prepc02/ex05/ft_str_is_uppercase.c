#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int value;
	int i;
	
	value = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		value = 1;
		else
		value = 0;
		i++;
	}
	return(value);
}

int main(void)
{
	char *str = "";
	printf("%d", ft_str_is_uppercase(str));
}
