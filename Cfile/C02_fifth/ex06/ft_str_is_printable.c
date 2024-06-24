/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:56:10 by amismail          #+#    #+#             */
/*   Updated: 2024/06/11 15:57:59 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char	str2;

	str1 = "485^&*(#%^*0dji95-0";
	str2 = 127;
	printf ("%d", ft_str_is_printable(str1));
	printf ("\n");
	printf ("%d", ft_str_is_printable(&str2));
}*/
