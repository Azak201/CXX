/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:09 by amismail          #+#    #+#             */
/*   Updated: 2024/06/24 15:39:20 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

/*int main() {
    char str[] = "Hello, world!";

    ft_putstr(str);

    return 0;
}*/
