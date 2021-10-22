/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:44:56 by apaula-r          #+#    #+#             */
/*   Updated: 2021/08/24 14:39:42 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*
#include <stdio.h>

int ft_fibonacci(int index);
int main (void)
{
    printf("Index -5, Fibonacci = %d\n", ft_fibonacci(-5));
    printf("Index 0, Fibonacci = %d\n", ft_fibonacci(0));
    printf("Index 1, Fibonacci = %d\n", ft_fibonacci(1));
    printf("Index 2, Fibonacci = %d\n", ft_fibonacci(2));
    printf("Index 3, Fibonacci = %d\n", ft_fibonacci(3));
    printf("Index 4, Fibonacci = %d\n", ft_fibonacci(4));
    printf("Index 50, Fibonacci = %d\n", ft_fibonacci(50));
}
*/
