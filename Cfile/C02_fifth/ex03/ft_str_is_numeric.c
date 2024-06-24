/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:42:47 by amismail          #+#    #+#             */
/*   Updated: 2024/06/11 15:46:18 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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

	str1 = "4850dji95-0";
	str2 = "48069707034";
	printf ("%d", ft_str_is_numeric(str1));
	printf ("\n");
	printf ("%d", ft_str_is_numeric(str2));
}*/
