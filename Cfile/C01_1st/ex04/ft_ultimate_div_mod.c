/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:31:38 by amismail          #+#    #+#             */
/*   Updated: 2024/06/08 19:56:11 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	m;

	d = *a / *b;
	m = *a % *b;
	*a = d;
	*b = m;
}

/*int	main(void)
{
	int	a1;
	int	a2;

	a1 = 9;
	a2 = 3;
	ft_ultimate_div_mod (&a1, &a2);
	printf ("9 on 3 div is %d \n 9 mod 3 %d ", a1, a2);
}*/
