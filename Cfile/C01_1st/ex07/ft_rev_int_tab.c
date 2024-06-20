/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 12:47:14 by amismail          #+#    #+#             */
/*   Updated: 2024/06/09 14:12:17 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	j = size - 1;
	i = 0;
	while (i < size / 2)
	{
		ft_swap (&tab[i], &tab[j - i]);
		i ++;
	}
}

/*int	main(void)
{
	int	arr[6];
	int	i;
	int	s;

	i = 0;
	s = 6;
	while (i < s)
	{
		arr[i] = i + 1;
		i ++;
	}
	i = 0;
	while (i < s)
	{
		printf ("%d", arr[i]);
		i ++;
	}
	printf("\n");
	ft_rev_int_tab (arr, s);
	i = 0;
	while (i < s)
	{
		printf ("%d", arr[i]);
		i ++;
	}
}*/
