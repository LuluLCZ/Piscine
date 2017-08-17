/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 18:39:50 by nsayah            #+#    #+#             */
/*   Updated: 2017/03/17 18:41:27 by nsayah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *s)
{
	while (*s)
	{
		if (*s >= 97 && *s <= 122)
			ft_putchar('m' - (*s - 'n'));
		else if (*s >= 65 && *s <= 90)
			ft_putchar('M' - (*s - 'N'));
		else
			ft_putchar(*s);
		s++;
	}
}

Deux versions !

void    alpha_mirror(char *str)
{
  while (*str)
  {
    if (*str >= 65 && *str <= 90)
      ft_putchar(90 - (*str - 65));
    else if (*str >= 97 && *str <= 122)
      ft_putchar(122 - (*str - 97));
    else
      ft_putchar(*str);
    str++;
  }
}


int		main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	ft_putchar('\n');
}