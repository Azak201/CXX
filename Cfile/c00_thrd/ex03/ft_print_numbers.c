/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:49:57 by amismail          #+#    #+#             */
/*   Updated: 2024/06/05 13:37:04 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_numbers(void)
{
	char	counter;

	counter = '0';
	while (counter >= '0' && counter <= '9')
	{
		write(1, &counter, 1);
		counter ++ ;
	}
}
