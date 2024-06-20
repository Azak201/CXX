/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:52:21 by amismail          #+#    #+#             */
/*   Updated: 2024/06/11 15:55:29 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			r = 1;
		else
		{
			r = 0;
			break ;
		}
		i ++;
	}
	return (r);
}

/*int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "AGAGHTHESHTH";
	str2 = "Aadgjioe";
	printf ("%d", ft_str_is_uppercase(str1));
	printf ("\n");
	printf ("%d", ft_str_is_uppercase(str2));
}*/
