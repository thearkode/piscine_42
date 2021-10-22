/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:41:47 by apaula-r          #+#    #+#             */
/*   Updated: 2021/08/22 18:41:49 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}
/*
#include <stdio.h>
int ft_recursive_power(int nb, int power);
int main (void)
{
    printf("nb = -5 , power = 2 , result = %d\n", ft_recursive_power(-5, 2));
    printf("nb = 5 , power = -2 , result = %d\n", ft_recursive_power(5, -2));
    printf("nb = 3 , power = 3 , result = %d\n", ft_recursive_power(3, 3));
    printf("nb = 10 , power = 4 , result = %d\n", ft_recursive_power(10, 4));
    printf("nb = 1 , power = 1 , result = %d\n", ft_recursive_power(1, 1));
}
*/
