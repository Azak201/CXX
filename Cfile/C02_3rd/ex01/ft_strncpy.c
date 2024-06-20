/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:04:43 by amismail          #+#    #+#             */
/*   Updated: 2024/06/20 19:19:24 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	nu;

	nu = n;
	i = 0;
	while (src[i] != '\0' && i < nu)
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < nu)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*c;
	char	d[10];

	c = "this is my string for test";
	ft_strncpy(d, c, 5);
	printf("the coppid str is:%s\n",d);
	ft_strncpy(d, c, 10);
	printf("the coppid str is:%s",d);
	return (0);
}*/
