/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 02:31:40 by llacaze           #+#    #+#             */
/*   Updated: 2017/07/25 02:45:57 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_separateur(char str)
{
	int a;

	a = 0;
	if (str == '\0')
		return (0);
	if (str != '\n' && str != ' ' && str != '\0' && str != '\t' && str != '\v')
		a = 2;
	if (str == '\n' || str == ' ' || str == '\t' || str == '\v')
		a = 1;
	return (a);
}

int		ft_decoupage(int i, int n, char *str, char **tab)
{
	int		h;

	while (str[i] != '\0' && ft_separateur(str[i]) == 1)
		i++;
	while (str[i] != '\0')
	{
		if (!(tab[n] = (char *)malloc(sizeof(char) * ft_strlen(str) + 1)))
			return (0);
		h = 0;
		while (ft_separateur(str[i] == 2))
		{
			tab[n][h] = str[i];
			h++;
			i++;
		}
		tab[n][h] = '\0';
		while (str[i] != '\0' && ft_separateur(str[i]) == 1)
			i++;
		n++;
	}
	tab[n] = NULL;
	return (0);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		n;
	char	**tab;

	i = 0;
	n = 2;
	if (*str == '\0')
		return (0);
	if (!(tab = (char **)malloc(sizeof(char *) * ft_strlen(str))))
		return (NULL);
	ft_decoupage(0, 0, str, tab);
	return (tab);
}
