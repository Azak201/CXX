/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:56:12 by amismail          #+#    #+#             */
/*   Updated: 2024/07/02 12:06:07 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

# include <unistd.h>
# include <stdio.h>

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}		t_stock_str;

#endif
