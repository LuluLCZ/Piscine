/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 17:58:13 by nsayah            #+#    #+#             */
/*   Updated: 2017/03/18 18:10:40 by nsayah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     add(int a, int b)
{
    return (a + b);
}

int     sub(int a, int b)
{
    return (a - b);
}

int     mut(int a, int b)
{
    return (a * b);
}

int     ft_div(int a, int b)
{
    return (a / b);
}

int     mod(int a, int b)
{
    return (a % b);
}

int     doop(char  *a, char *b, char c)
{
    if (c == '+')
        return(add(atoi(a), atoi(b)));
    if (c == '-')
        return(sub(atoi(a), atoi(b)));
    if (c == '*')
        return(mut(atoi(a), atoi(b)));
    if (c == '/')
        return(ft_div(atoi(a), atoi(b)));
    if (c == '%')
        return(mod(atoi(a), atoi(b)));
    return(0);
}

int     main(int ac, char **av)
{
    if (ac == 4)
        printf("%d\n", doop(av[1], av[3], av[2][0]));
    else
        write(1, "\n", 1);
    return (0);
}