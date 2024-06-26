/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:54:08 by amismail          #+#    #+#             */
/*   Updated: 2024/06/24 12:39:46 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i ++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

/*int	main(void)
{
	char	str1[] = "AAGFDJKITSDHD";
	char    str2[] = "AAAAGFDJKITSDHD";
	printf ("%d", ft_strcmp (str1, str1));
	printf ("%d", ft_strcmp (str1, str2));
	printf ("%d", ft_strcmp (str2, str1));
	return (0);
}*/
