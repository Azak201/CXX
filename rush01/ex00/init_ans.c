/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_ans.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 14:23:04 by amismail          #+#    #+#             */
/*   Updated: 2024/06/22 15:47:16 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	sol_1(int ans_arr[4][4], int row, int col);
void	sol_4(int ans_arr[4][4], int row, int col);

int	init_ans(int header[4][4], int ans_arr[4][4])
{
	int	i;
	int	j;
	int	ch;

	i = -1;
	ch = 0;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (header[i][j] == 1 && ++ch)
				sol_1 (ans_arr, i, j);
			if (header[i][j] == 4)
				sol_4 (ans_arr, i, j);
		}
	}
	if (ch > 4)
	{
		write (1, "error\n", 6);
		return (1);
	}
	return (0);
}

void	sol_1(int ans_arr[4][4], int h_row, int h_col)
{
	if (h_row == 0)
		ans_arr[0][h_col] = 4;
	if (h_row == 1)
		ans_arr[3][h_col] = 4;
	if (h_row == 2)
		ans_arr[h_col][0] = 4;
	if (h_row == 3)
		ans_arr[h_col][3] = 4;
}

void	sol_4(int ans_arr[4][4], int h_row, int h_col)
{
	int	i;
	int	val;

	i = -1;
	val = 5;
	while (++i < 4 && --val)
	{
		if (h_row == 0)
			ans_arr[i][h_col] = i + 1;
		else if (h_row == 1)
			ans_arr[i][h_col] = val;
	}
	i = -1;
	val = 5;
	while (++i < 4 && --val)
	{
		if (h_row == 2)
			ans_arr[h_col][i] = i + 1;
		else if (h_row == 3)
			ans_arr[h_col][i] = val;
	}
}
