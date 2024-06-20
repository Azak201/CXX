/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:47:57 by amismail          #+#    #+#             */
/*   Updated: 2024/06/09 17:47:00 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			r = 1;
		else
		{
			r = 0;
			break ;
		}
		i++;
	}
	return (r);
}

/*int	main(void)
{
	char	*a;
	char	*b;
	int	at;

	a = "tHisIsAstring";
	b = "This is Astring";
	at = ft_str_is_alpha (a);
	printf ("the first:%d\n", at);
	at = ft_str_is_alpha (b);
	printf ("the sec is:%d\n", at);
	b = "";
	at = ft_str_is_alpha (b);
	printf ("the therd:%d\n ", at);
	return (0);
}*/
