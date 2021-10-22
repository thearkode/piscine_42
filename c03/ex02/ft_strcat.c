/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:53:18 by apaula-r          #+#    #+#             */
/*   Updated: 2021/08/17 12:17:13 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
		i++;
	while (src[b] != '\0')
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{	
	char dest[50] = "anaa";
	char src[50] = "isamazing";

	char dest2[50] = "anaa";
	char src2[50] = "isamazing";

	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest2, src2));
	
}
*/
