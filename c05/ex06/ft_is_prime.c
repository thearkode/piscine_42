/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:49:39 by apaula-r          #+#    #+#             */
/*   Updated: 2021/08/22 18:49:41 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int ft_is_prime(int nb);

int main (void)
{
    printf("Num -4 retorna %d\n", ft_is_prime(-4));
    printf("Num 0 retorna %d\n", ft_is_prime(0));
    printf("Num 1 retorna %d\n", ft_is_prime(1));
    printf("Num 2 retorna %d\n", ft_is_prime(2));
    printf("Num 4 retorna %d\n", ft_is_prime(4));
    printf("Num 13 retorna %d\n", ft_is_prime(13));
    printf("Num 16 retorna %d\n", ft_is_prime(16));
    printf("Num 17 retorna %d\n", ft_is_prime(17));
    printf("Num 28 retorna %d\n", ft_is_prime(28));
}
*/
