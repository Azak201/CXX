/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:37:25 by amismail          #+#    #+#             */
/*   Updated: 2024/06/24 15:37:51 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != 0)
		x ++;
	return (x);
}

/*int main() {
    char str[] = "Hello, world!";
    int length;

    length = ft_strlen(str);

    printf("Length of '%s' is %d\n", str, length);

    return 0;
}*/
