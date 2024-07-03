/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_numb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:25:54 by amismail          #+#    #+#             */
/*   Updated: 2024/07/03 13:05:17 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str);
void	put_nbr_base(int num, char *base);
void	put_num(int num, char *base);

int	main(int ac, char **av)
{
	int	a;

	if (ac == 3)
	{
		a = ft_atoi(av[1]);
		printf("the number %d the base %s \n", a, av[2]);
		put_nbr_base(a, av[2]);
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
	sum = 0;
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

void	put_nbr_base(int num, char *base)
{
	long	n;
	int		len;

	n = num;
	len = 1;
	while (base[len] != 0)
		len++;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (1, "-", 1);
		put_nbr_base (-n, base);
	}
	if (n > (len - 1))
	{
		put_nbr_base (n / len, base);
		put_num (n % len, base);
	}
	else
		put_num (n % (len + 1), base);
}

void	put_num(int num, char *base)
{
	write(1, &base[num], 1);
}
