/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:38:27 by amismail          #+#    #+#             */
/*   Updated: 2024/06/08 14:52:32 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	count;

	count = 'z';
	while (count <= 'z' && count >= 'a')
	{
		write(1, &count, 1);
		count--;
	}
}
