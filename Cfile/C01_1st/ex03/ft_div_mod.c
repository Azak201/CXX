/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:14:12 by amismail          #+#    #+#             */
/*   Updated: 2024/06/08 19:30:41 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	x;
	int	p;
	int	di;
	int	mo;

	x = 9;
	p = 3;
	di = 0;
	mo = 0;
	ft_div_mod (x, p, &di, &mo);
	printf ("the first val %d \nthe second val %d\n the div %d\n the mod %d\n ",
		x, p, di, mo);
}*/
