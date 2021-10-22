 #include <stdio.h>
#include <string.h>
#include <unistd.h>

//tirar stdio
// Norminette
// checar asterisco no prototipo
// cabecalho
//tirar main.c
//tirar outros arq
//tirar putchare putstr
//tirar coment

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putstr(char *dest)
{
	unsigned int i = 0;

	while (dest[i] != '\0')
	{
		write(1, dest + i, 1);
		//ft_putchar(dest[i]);
		i++;
	}
}
char *ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int i;

	i = 0;
	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
int main(void)
{
	char dest[] = "hello pisciner";
	char src[] = "what a fucked up day girl";

	ft_strncpy(dest, src, 5);
	ft_putstr(dest);
	return(0);
}
