#include <unistd.h>
#include <stdio.h>
#include <string.h>

//tirar include
//norminette
//cabecalho
//tirar outros arq

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;	
			write (1, &str[i], 1);	
		}
		i++;
	}
	return (str);
}

int main(void)
{
	char str[] = "ayuubu";
	ft_strupcase(str);
}
