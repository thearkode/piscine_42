/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:08:02 by apaula-r          #+#    #+#             */
/*   Updated: 2021/08/24 18:28:56 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s1)
{
	int	len;

	len = 0;
	while (s1[len] != '\0')
		len++;
	return (len);
}

int	ft_check_base(char *base)
{
	int	count;
	int	i;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		count = i + 1;
		while (base[count] != '\0')
		{
			if (base[i] == base[count] || (base[count] == '-'
					|| base[count] == '+' || base[count] == 32
					|| (base[count] >= 9 && base[count] <= 13)))
				return (0);
			count++;
		}
		i++;
	}
	return (1);
}

int	ft_base(int c, char *base, int base_len)
{
	int	i;

	i = 0;
	while (i < base_len)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	ret;
	int	base_len;

	if (ft_check_base(base) == 0)
		return (0);
	i = 0;
	sign = 1;
	ret = 0;
	base_len = ft_strlen(base);
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_base(str[i], base, base_len) != -1 && str[i] != '\0')
	{
		ret = ret * base_len + ft_base(str[i], base, base_len);
		i++;
	}
	return (ret * sign);
}
/*
#include <stdio.h>
#include <unistd.h>
int main(void)
{
	printf("%d\n", ft_atoi_base("A", "0123456789ABCDEF"));
}
*/
