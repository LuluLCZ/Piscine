/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 15:11:49 by nsayah            #+#    #+#             */
/*   Updated: 2017/03/17 15:15:33 by nsayah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
  write(1, &c, 1);
}

void    search_and_replace(char *str, char a, char b)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (str[i] == a)
      ft_putchar(b);
    else
      ft_putchar(str[i]);
    i++;
  }
}

int     main(int ac, char **av)
{
  if (ac == 4)
  {
    if (!(av[2][1] || av[3][1]))
      search_and_replace(av[1], av[2][0], av[3][0]);
  }
  ft_putchar('\n');
}