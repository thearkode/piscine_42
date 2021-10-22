/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:48:20 by apaula-r          #+#    #+#             */
/*   Updated: 2021/08/18 16:02:42 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	pos;
	int	i;

	pos = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[pos] != '\0')
	{
		if (str[pos] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[pos + i] == to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (&str[pos]);
		}
		pos++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
 	char *str = "keep cacalm girl";
	char *to_find = "calm";

	char *str2 = "keep cacalm girl";
	char *to_find2 = "calm";


	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str2, to_find2));
}
*/
