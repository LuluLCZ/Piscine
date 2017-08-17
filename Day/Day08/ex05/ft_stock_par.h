/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 18:19:54 by llacaze           #+#    #+#             */
/*   Updated: 2017/07/26 04:19:22 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>

char				**ft_split_whitespaces(char *str);
typedef struct		s_stock_par
{
	int		size_params;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;
#endif
