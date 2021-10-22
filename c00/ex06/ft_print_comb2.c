/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 19:55:46 by apaula-r          #+#    #+#             */
/*   Updated: 2021/08/08 21:47:15 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	transform(int num)
{
	int		dezena;
	int		unidade;
	char	dez;
	char	uni;

	dezena = num / 10;
	unidade = num % 10;
	dez = dezena + '0';
	uni = unidade + '0';
	write(1, &dez, 1);
	write(1, &uni, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	sec;

	first = 0;
	while (first <= 98)
	{
		sec = 1 + first;
		while (sec <= 99)
		{
			transform(first);
			write(1, " ", 1);
			transform(sec);
			if (first != 98)
				write(1, ", ", 2);
			sec++;
		}
		first++;
	}
}
