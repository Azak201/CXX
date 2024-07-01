/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 05:32:04 by amismail          #+#    #+#             */
/*   Updated: 2024/06/27 05:58:34 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	size = max - min;
	i = 0;
	arr = (int *)malloc(size * sizeof(int));
	if (min >= max)
		return (NULL);
	while (i < size)
	{
		arr[i] = min;
		min ++;
		i++;
	}
	return (arr);
}

/*int	main(int n, char **v)
{
	int	min;
	int	max;
	int	*arr;
	int	i;

	min = v[1][0] - 48;
	max = v[1][1] - 48;
	arr = ft_range(min, max);
	i = n;
	i = 0;
	while (i < max - min)
	{
		printf("%d", arr[i]);
		i++;
	}

}*/
