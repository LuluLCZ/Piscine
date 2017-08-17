/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 19:22:09 by nsayah            #+#    #+#             */
/*   Updated: 2017/03/18 19:35:19 by nsayah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char    *ft_strdup(char *src)
{
    int     i;
    int     length;
    char    *dup;

    i = 0;
    if (!src)
        return (NULL);
    while (src[i])
        i++;
    length = i + 1;
    i =	0;
    if ((dup = ((char *)malloc(length))))
    {
        while (i <= length)
        {
            dup[i] = src[i];
            i++;
        }
        return (dup);
    }
    else
        return (NULL);
}