/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 14:35:13 by amismail          #+#    #+#             */
/*   Updated: 2024/06/22 14:37:19 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	solve(int head[4][4]);

void	cond(int *added, int *i)
{
	*added = *added + 1;
	if (*added == 4)
	{
		*added = 0;
		*i = *i + 1;
	}
}

int	input_toint(char *arr, int number[4][4])
{
	int	count;
	int	added;
	int	i;

	count = 0;
	i = 0;
	added = 0;
	while (arr[count] != '\0')
	{
		if (arr[count] == ' ')
			count++;
		if ((arr[count] >= '1' && arr[count] <= '4'))
		{
			number[i][added] = arr[count] - 48;
			cond(&added, &i);
			count++;
		}
		else
			count ++;
	}
	if (i == 4 && added == 0)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	headers[4][4];
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (++i < 4)
		while (++j < 4)
			headers[i][j] = 0;
	if (argc == 2)
	{
		if (input_toint(argv[1], headers) != 1)
		{
			write(1, "error\n", 6);
			return (0);
		}
		solve(headers);
	}
	else
		write (1, "error\n", 6);
	return (0);
}
/*
    for the input test
        for(int i=0;i<4;i++)
        {
            for(int j =0; j<4; j++)
                printf("%d",headers[i][j]);
            printf("\n");
        }
*/
