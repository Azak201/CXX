/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 07:01:39 by amismail          #+#    #+#             */
/*   Updated: 2024/06/27 08:42:34 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

void	ft_strcat(char *d, char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (d[i] != 0)
		i++;
	while (s[j] != 0)
	{
		d[i] = s[j];
		i++;
		j++;
	}
	d[i] = '\0';
}

int	leng(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*emp;
	int		len;
	int		i;
	char	*total;

	len = 0;
	if (size == 0)
	{
		emp = (char *) malloc (sizeof (char));
		*emp = '\0';
		return (emp);
	}
	i = -1;
	while (++i < size)
		len = len + leng (strs[i]) + leng (sep);
	total = (char *) malloc (sizeof(char) * (len + 1));
	total[0] = '\0';
	i = -1;
	while (++i < size)
	{
		ft_strcat (total, strs[i]);
		if (i < size - 1)
			ft_strcat (total, sep);
	}
	return (total);
}
