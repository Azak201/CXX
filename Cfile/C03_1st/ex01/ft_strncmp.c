/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:35:55 by amismail          #+#    #+#             */
/*   Updated: 2024/06/24 12:42:49 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && n)
	{
		if (s2[i] == '\0' || s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		n--;
	}
	if ((s1[i] != s2[i]) && n)
		return (s1[i] - s2[i]);
	return (0);
}

/*int	main(void)
{
	char	str1[] = "AAGFDJKITSDHD";
	char    str2[] = "AAAAGFDJKITSDHD";
	printf ("%d", ft_strncmp (str1, str1,3));
	printf ("%d", ft_strncmp (str1, str2,2));
	printf ("%d", ft_strncmp (str2, str1,5));
	return (0);
}*/
