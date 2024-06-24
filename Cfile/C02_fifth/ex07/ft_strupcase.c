/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:59:41 by amismail          #+#    #+#             */
/*   Updated: 2024/06/11 16:41:20 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i ++;
	}
	return (str);
}

/*int	main(void)
{
	char	str1[] = "ajdlaglhsfag";
	printf ("%s", str1);
	printf ("\n");
	printf ("%s", ft_strupcase(str1));
	return (0);
}*/
