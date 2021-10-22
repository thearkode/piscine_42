/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:08:01 by apaula-r          #+#    #+#             */
/*   Updated: 2021/08/15 17:45:02 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	copya;
	int	copyb;

	copya = *a;
	copyb = *b;
	*a = copya / copyb;
	*b = copya % copyb;
}
