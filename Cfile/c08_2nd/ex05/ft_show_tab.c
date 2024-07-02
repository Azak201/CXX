/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:05:12 by amismail          #+#    #+#             */
/*   Updated: 2024/07/01 16:34:48 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <unistd.h>

void	print_nu(int number)
{
	number = number + 48;
	write(1, &number, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	print_nu(nb % 10);
}

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != 0)
	{
		write(1, &str[x], 1);
		x++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str == 0)
	{
		ft_putstr (par[i].str);
		write (1, "\n", 1);
		ft_putnbr (par[i].size);
		write (1, "\n", 1);
		ft_putstr (par[i].copy);
		write (1, "\n", 1);
		i++;
	}
}
