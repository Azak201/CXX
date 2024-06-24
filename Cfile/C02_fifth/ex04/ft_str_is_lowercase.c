/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:47:19 by amismail          #+#    #+#             */
/*   Updated: 2024/06/11 15:50:57 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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

	str1 = "afagfhweddf";
	str2 = "aggagdAgdf";
	printf ("%d", ft_str_is_lowercase(str1));
	printf ("\n");
	printf ("%d", ft_str_is_lowercase(str2));
}*/
