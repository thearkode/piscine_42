/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 17:06:06 by apaula-r          #+#    #+#             */
/*   Updated: 2021/08/09 11:19:26 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	first;
	char	sec;
	char	ter;

	first = '0';
	while (first <= '7')
	{
		sec = 1 + first;
		while (sec <= '8')
		{
			ter = 1 + sec ;
			while (ter <= '9')
			{
				ft_putchar(first);
				ft_putchar(sec);
				ft_putchar(ter);
				if (first != '7')
					write (1, ", ", 2);
				ter++;
			}
			sec++;
		}
		first++;
	}
}
