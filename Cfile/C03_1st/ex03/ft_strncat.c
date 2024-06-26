/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:15:29 by amismail          #+#    #+#             */
/*   Updated: 2024/06/20 16:57:13 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*org;

	org = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && nb)
	{
		*dest = *src;
		dest++;
		src++;
		nb --;
	}
	*dest = '\0';
	return (org);
}

/*int	main()
{
    char	dest[50] = "Hello, ";
    char	*src = "world!";

    printf ("Before strncat: %s\n", dest);
    ft_strncat (dest, src,4);
    printf ("After strncat: %s\n", dest);

    return 0;
}*/
