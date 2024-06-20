/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:49:29 by amismail          #+#    #+#             */
/*   Updated: 2024/06/05 17:55:48 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	posetive;

	negative = 'N';
	posetive = 'P';
	if (n < 0)
	{
		write (1, &negative, 1);
	}
	else
	{
		write (1, &posetive, 1);
	}
}
