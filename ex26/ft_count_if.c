/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugibone <lugibone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:55:12 by lugibone          #+#    #+#             */
/*   Updated: 2019/04/01 13:55:52 by lugibone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			result++;
		i++;
	}
	return (result);
}
