/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:55:05 by apaula-r          #+#    #+#             */
/*   Updated: 2021/08/25 17:42:14 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *s1)
{
	int len;

	len = 0;
	while (s1[len] != '\0')
		len++;
	return (len);
}

int ft_check_base(char *base)
{
	int count;
	int i;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		count = i + 1;
		while (base[count] != '\0')
		{
			if (base[i] == base[count] || (base[i] == '-' || base[i] == '+'))
				return (0);
			count++;
		}
		i++;
	}
	return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
	int base_length;

	if (ft_check_base(base) == 0)
		return;
	base_length = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
		ft_putnbr_base(nbr, base);
	}
	else if (nbr >= base_length)
	{
		ft_putnbr_base(nbr / base_length, base);
		write(1, &base[nbr % base_length], 1);
	}
	else
		write(1, &base[nbr], 1);
}

int main()
{
	ft_putnbr_base(40, "01");
}
