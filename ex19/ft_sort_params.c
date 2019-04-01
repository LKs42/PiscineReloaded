/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugibone <lugibone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:39:21 by lugibone          #+#    #+#             */
/*   Updated: 2019/04/01 13:40:33 by lugibone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_array(char **str, int size)
{
	int		i;
	int		k;
	char	*l;

	i = 2;
	k = 0;
	while (k < size)
	{
		while (i < size)
		{
			if (ft_strcmp(str[i - 1], str[i]) > 0)
			{
				l = str[i - 1];
				str[i - 1] = str[i];
				str[i] = l;
			}
			i++;
		}
		k++;
		i = 2;
	}
}

int		main(int argc, char **argv)
{
	int i;

	ft_sort_array(argv, argc);
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
