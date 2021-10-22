/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:45:47 by apaula-r          #+#    #+#             */
/*   Updated: 2021/08/17 12:42:23 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
		i++;
	while (b < nb && src[b] != '\0')
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{	
	char dest[50] = "ana";
	char src[50] = "ribas";

	char dest1[50] = "ana";
	char src1[50] = "ribas";

	unsigned int nb = 2;

	printf("%s\n", ft_strncat(dest, src, nb));
	printf("%s\n", strncat(dest1, src1, nb));
	return(0);
}
*/
