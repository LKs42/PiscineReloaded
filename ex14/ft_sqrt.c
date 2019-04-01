/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugibone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:18:49 by lugibone          #+#    #+#             */
/*   Updated: 2019/04/01 13:59:48 by lugibone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int a;

	a = -1;
	while (++a < (nb / 2))
	{
		if ((a * a) == nb)
			return (a);
	}
	return (0);
}
