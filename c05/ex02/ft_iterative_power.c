/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:38:01 by apaula-r          #+#    #+#             */
/*   Updated: 2021/08/22 18:38:04 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	c;
	int	result;

	c = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (c < power)
	{
		result = result * nb;
		c++;
	}
	return (result);
}
/*
#include <stdio.h>
int ft_iterative_power(int nb, int power);
int main ()
{
    printf("nb = -5 , power = 2 , result = %d\n", ft_iterative_power(-5, 2));
    printf("nb = 5 , power = -2 , result = %d\n", ft_iterative_power(5, -2));
    printf("nb = 3 , power = 3 , result = %d\n", ft_iterative_power(3, 3));
    printf("nb = 10 , power = 4 , result = %d\n", ft_iterative_power(10, 4));
}
*/
