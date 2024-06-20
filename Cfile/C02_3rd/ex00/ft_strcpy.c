/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 14:39:48 by amismail          #+#    #+#             */
/*   Updated: 2024/06/12 13:37:38 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0' )
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*src;
	char	dest[15];

	src = "hello my friend";
	printf("orginal string: %s\n", src);
	ft_strcpy (dest, src);
	printf("Copied string: %s\n", dest);
	return (0);
}*/
