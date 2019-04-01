/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugibone <lugibone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:45:20 by lugibone          #+#    #+#             */
/*   Updated: 2019/04/01 13:47:18 by lugibone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *result;
	int i;
	int j;

	result = 0;
	if (min >= max)
		return (result);
	if (!(result = malloc(sizeof(int) * (max - min) + 1)))
		return (0);
	i = -1;
	j = min;
	while (++i < max - min)
	{
		result[i] = j;
		j++;
	}
	return (result);
}
