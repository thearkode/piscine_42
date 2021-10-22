#include <unistd.h>
#include <string.h>
#include <stdio.h>

//colocar cabecalho
//norminette
//ver include
//tirar printf!!
//tirar main.c
//tirar outros arq
//tirar coment

int ft_str_is_alpha(char *str)
{
	unsigned int i;
	int	valor;

	valor = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			valor = 1;		
		else if (str[i] >= 'a' && str[i] <= 'z')
			valor = 1;
		else
			valor = 0;
		i++;
	}
	return(valor);
}

int main(void)
{
	char *str = "1";
	printf("%d", ft_str_is_alpha(str));
}