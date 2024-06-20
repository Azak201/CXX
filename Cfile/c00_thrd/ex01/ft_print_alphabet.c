/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:27:57 by amismail          #+#    #+#             */
/*   Updated: 2024/06/05 12:43:55 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	count;

	count = 'a';
	while (count >= 'a' && count <= 'z')
	{
		write(1, &count, 1);
		count++;
	}
}
