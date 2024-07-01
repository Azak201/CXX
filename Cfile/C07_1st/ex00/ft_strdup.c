/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 03:53:16 by amismail          #+#    #+#             */
/*   Updated: 2024/06/27 05:59:45 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	strl(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*x;
	int		i;

	i = 0;
	x = (char *) malloc (strl (src) * sizeof (char));
	while (src[i])
	{
		x[i] = src[i];
		i++;
	}
	x[i] = '\0';
	return (x);
}

/*int	main(void)
{
	char 	*dest;
	char	*src = "this is a test to see what to do ";
	dest = ft_strdup(src);
	printf("%s", dest);
	return (0);
	
}*/
