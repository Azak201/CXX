/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:35:28 by amismail          #+#    #+#             */
/*   Updated: 2024/06/12 13:43:23 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i ++;
	}
	return (str);
}

/*int	main(void)
{
	char	str1[] = "AAGFDJKITSDHD";
	printf ("%s", str1);
	printf ("\n");
	printf ("%s", ft_strlowcase(str1));
	return (0);
}*/
