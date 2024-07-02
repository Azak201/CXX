/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:06:04 by amismail          #+#    #+#             */
/*   Updated: 2024/07/02 12:17:54 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != 0)
		x ++;
	return (x);
}

char	*ft_strdup(char *src)
{
	char	*x;
	int		i;

	i = 0;
	x = (char *) malloc ((ft_strlen (src) + 1) * sizeof (char));
	while (src[i])
	{
		x[i] = src[i];
		i++;
	}
	x[i] = '\0';
	return (x);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tap;
	int			i;

	i = 0;
	tap = malloc (sizeof (t_stock_str) * (ac + 1));
	if (tap == NULL)
		return (NULL);
	while (i < ac)
	{
		tap[i].size = ft_strlen(av[i]);
		tap[i].copy = ft_strdup (av[i]);
		if (tap[i].copy == NULL)
			return (NULL);
		tap[i].str = av[i];
		i ++;
	}
	tap[i].str = 0;
	return (tap);
}

/*int main(int argc, char **argv)
{
    // Check if there are arguments provided
    if (argc <= 1)
    {
        printf("Usage: %s <arg1> <arg2> ...\n", argv[0]);
        return 1;
    }

    // Create an array of t_stock_str by calling ft_strs_to_tab
    t_stock_str *stock_tab = ft_strs_to_tab(argc - 1, &argv[1]);

    // Check if ft_strs_to_tab succeeded
    if (stock_tab == NULL)
    {
        printf("Allocation failed.\n");
        return 1;
    }

    // Print out the contents of the t_stock_str array
    printf("Printing t_stock_str array:\n");
    for (int i = 0; i < argc - 1; ++i)
    {
        printf("String: %s\n", stock_tab[i].str);
        printf("Size: %d\n", stock_tab[i].size);
        printf("Copy: %s\n", stock_tab[i].copy);
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < argc - 1; ++i)
    {
        free(stock_tab[i].copy); // Free the strdup'd copy
    }
    free(stock_tab); // Free the array itself

    return 0;
}*/
