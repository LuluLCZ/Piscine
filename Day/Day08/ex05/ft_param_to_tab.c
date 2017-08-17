/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 00:50:25 by llacaze           #+#    #+#             */
/*   Updated: 2017/07/26 04:18:37 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		a;
	char	*dup;

	a = 0;
	if (!(dup = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (0);
	if (src == '\0')
		return (0);
	while (src[a] != '\0')
	{
		dup[a] = src[a];
		a++;
	}
	dup[a] = '\0';
	return (dup);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int					a;
	int					i;
	struct s_stock_par	*modiff;

	if (!(modiff = malloc(sizeof(struct s_stock_par))))
		return (0);
	a = 0;
	while (a < ac)
	{
		i = 0;
		while (av[a][i] != '\0')
		{
			i++;
			modiff->size_params = i;
			modiff->str = av[a];
			modiff->copy = ft_strdup(*av);
			modiff->tab = ft_split_whitespaces(*av);
		}
		a++;
	}
	a = 0;
	return (modiff);
}
