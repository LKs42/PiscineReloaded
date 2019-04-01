/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugibone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:12:57 by lugibone          #+#    #+#             */
/*   Updated: 2019/04/01 13:14:59 by lugibone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;
	int i;

	i = 0;
	result = 1;
	if (nb > 12 || nb < 0)
		return (0);
	while (i < nb)
	{
		result += result * i;
		i++;
	}
	return (result);
}
