#include <stdio.h>
#include <string.h>
#include <unistd.h>

//tirar stdio
// tirar putstr
//tirar main.c
// cabecalho
//Norminette
// conferir que prototipo subject tem * em *ft_strcpy
// apagar outros arquivos

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *dest)
{
	int i = 0;
	while (dest[i] != '\0')
	{
		ft_putchar(dest[i]);
		i++;
	}
}

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int main(void)
{	
	char dest[] = "pedro";
	char src[] = "ana";

	ft_strcpy(dest, src);
	ft_putstr(dest);
	return(0);
}
