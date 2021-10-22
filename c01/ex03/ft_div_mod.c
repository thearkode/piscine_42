/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:58:21 by apaula-r          #+#    #+#             */
/*   Updated: 2021/08/14 16:00:00 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	resultdiv;
	int	resultmod;

	resultdiv = a / b;
	resultmod = a % b;
	*div = resultdiv;
	*mod = resultmod;
}
