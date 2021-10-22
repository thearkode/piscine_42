/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:48:56 by apaula-r          #+#    #+#             */
/*   Updated: 2021/08/18 15:57:18 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	o;

	o = 0;
	while (s[o] != '\0')
	{
		o++;
	}
	return (o);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && (j + i + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
	char dest[] = "apenas";
	char *src = "cansada";

	printf("Dest: %s\n", dest);
	printf("Src: %s\n", src);
	printf("Return: %u\n", ft_strlcat(dest, src, 15));
	printf("Dest: %s\n", dest);
}
*/
