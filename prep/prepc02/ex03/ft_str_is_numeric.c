#include <unistd.h>
#include <stdio.h>
#include <string.h>

//tirar include
//norminette
//tirar main
//tirar printf
//norminette
//apagar arq ex04
//tirar coments

int	ft_str_is_numeric(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	char *str;
	str = "111";
	printf("%d", ft_str_is_numeric(str));
}
