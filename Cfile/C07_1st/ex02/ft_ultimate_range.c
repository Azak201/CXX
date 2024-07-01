/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 06:07:30 by amismail          #+#    #+#             */
/*   Updated: 2024/06/27 06:58:00 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(size * sizeof(int));
	while (i < size)
	{
		(*range)[i] = min;
		min ++;
		i++;
	}
	if (*range != NULL)
		return (size);
	return (-1);
}

/*int	main(int n, char **v)
{
	int	min;
	int	max;
	int	*arr;
	int	i;
	int	size;

	min = v[1][0] - 48;
	max = v[1][1] - 48;
	size = ft_ultimate_range(&arr, min, max);
	i = n;
	i = 0;
	while (i < max - min)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n%d",size);
}*/
