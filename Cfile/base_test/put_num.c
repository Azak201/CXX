/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_numbase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:25:54 by amismail          #+#    #+#             */
/*   Updated: 2024/07/03 12:22:26 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str);
void	put_nbr(int num);
void	put_num(int num);

int	main(int ac, char **av)
{
	int	a;

	if (ac == 2)
	{
		a = ft_atoi(av[1]);
		printf("%d \n", a);
		put_nbr(a);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sum;
	int	sign;

	i = 0;
	sign = 1;
	sum  = 0;
	while (str[i] != 0 && ((str[i] == 32) || (str[i] > 8 && str[i] < 14)))
		i++;
	while (str[i] != 0 && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != 0 && (str[i] >= '0' && str[i] <= '9'))
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sum * sign);
}

void	put_nbr(int num)
{
	long	n;

	n = num;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		put_nbr (-n);
	}
	if (n > 9)
	{
		put_nbr (n / 10);
		put_num (n % 10);
	}
	else
		put_num (n);
}

void	put_num(int num)
{
	char	x;

	x = num + 48;
	write(1, &x, 1);
}
