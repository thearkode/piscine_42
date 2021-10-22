/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:47:48 by apaula-r          #+#    #+#             */
/*   Updated: 2021/08/23 18:48:59 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		write(1, &s1[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	while (argc > 0 && argc - 1 != '\0')
	{
		ft_rev_params(&argv[argc - 1][0]);
		write(1, "\n", 1);
		argc--;
	}
}
