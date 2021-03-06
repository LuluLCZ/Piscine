/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 17:50:13 by nsayah            #+#    #+#             */
/*   Updated: 2017/03/18 17:52:40 by nsayah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ulstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar(str[i] - ('a' - 'A'));
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar(str[i] - ('A' - 'a'));
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac > 1)
		ulstr(av[1]);
	ft_putchar('\n');
	return (0);
}
