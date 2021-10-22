/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:47:32 by apaula-r          #+#    #+#             */
/*   Updated: 2021/08/16 13:39:48 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (size > 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		size --;
	}	
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*
#include <stdio.h>
int main()
{
	char	dest[50] = "ana";
	char	src[50] = "pedro";

	printf("%u\n", ft_strlcpy(dest, src, 2));
	printf("%s\n", dest);
}
*/
