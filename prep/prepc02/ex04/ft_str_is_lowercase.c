#include <unistd.h>
#include <stdio.h>
#include <string.h>

//tirar main
//tirar includes
//norminette
//tirar outros arq
//tirar coments

int	ft_str_is_lowercase(char *str)
{
	int value;
	int i;

	value = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		value = 1;
		else
		value = 0;
		i++;
	}
	return(value);
}

int main(void)
{
	char *str = "aaAA";
	printf("%d", ft_str_is_lowercase(str));
}
