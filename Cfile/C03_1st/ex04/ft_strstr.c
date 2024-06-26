/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:45:23 by amismail          #+#    #+#             */
/*   Updated: 2024/06/24 14:30:40 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	r;

	r = 0;
	if (*to_find == 0)
		return (str);
	while (*str)
	{
		j = 0;
		if (*str == to_find[j])
		{
			while (str[j] == to_find[j])
			{
				if (to_find[j + 1] == 0)
					return (str);
				j++;
			}
		}
		str++;
	}
	return (NULL);
}

/*int   main(void)
{
        char    *c;
        char    *d="st";

        c = "this is my string for test";
        
        printf("the location str is:%s \n",ft_strstr(c,d));
        return (0);
}*/
