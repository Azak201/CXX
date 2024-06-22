/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validaitoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 14:54:14 by amismail          #+#    #+#             */
/*   Updated: 2024/06/22 14:56:36 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	valid_ltor(int check, int header[4][4], int ans_arr[4][4], int *v_arr)
{
	int	i;
	int	highest;
	int	count;

	i = -1;
	highest = 0;
	count = 0;
	while (++i < 4)
	{
		if (v_arr[2] == ans_arr[v_arr[0]][i] && i != v_arr[1])
			return (1);
		if (ans_arr[v_arr[0]][i] > highest)
		{
			highest = ans_arr[v_arr[0]][i];
			count++;
		}
		if (ans_arr[v_arr[0]][i] == -1)
			check = 1;
	}
	if (check == 0 && count != header[2][v_arr[0]])
		return (1);
	return (0);
}

int	valid_rtol(int check, int header[4][4], int ans_arr[4][4], int *v_arr)
{
	int	i;
	int	highest;
	int	count;

	i = 4;
	highest = 0;
	count = 0;
	while (--i > -1)
	{
		if (ans_arr[v_arr[0]][i] > highest)
		{
			highest = ans_arr[v_arr[0]][i];
			count++;
		}
		if (ans_arr[v_arr[0]][i] == -1)
			check = 1;
	}
	if (check == 0 && count != header[3][v_arr[0]])
		return (1);
	return (0);
}

int	valid_uptod(int check, int header[4][4], int ans_arr[4][4], int *v_arr)
{
	int	i;
	int	highest;
	int	count;

	i = -1;
	highest = 0;
	count = 0;
	while (++i < 4)
	{
		if (v_arr[2] == ans_arr[i][v_arr[1]] && i != v_arr[0])
			return (1);
		if (ans_arr[i][v_arr[1]] > highest)
		{
			highest = ans_arr[i][v_arr[1]];
			count++;
		}
		if (ans_arr[i][v_arr[1]] == -1)
			check = 1;
	}
	if (check == 0 && count != header[0][v_arr[1]])
		return (1);
	return (0);
}

int	valid_dtoup(int check, int header[4][4], int ans_arr[4][4], int *v_arr)
{
	int	i;
	int	highest;
	int	count;

	i = 4;
	highest = 0;
	count = 0;
	while (--i > -1)
	{
		if (ans_arr[i][v_arr[1]] > highest)
		{
			highest = ans_arr[i][v_arr[1]];
			count++;
		}
		if (ans_arr[i][v_arr[1]] == -1)
			check = 1;
	}
	if (check == 0 && count != header[1][v_arr[1]])
		return (1);
	return (0);
}
