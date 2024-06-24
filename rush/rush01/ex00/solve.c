/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 14:51:48 by amismail          #+#    #+#             */
/*   Updated: 2024/06/22 15:48:08 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int		init_ans(int header[4][4], int ans_arr[4][4]);
int		sands(int header[4][4], int ans_arr[4][4], int row, int col);
int		check(int header[4][4], int ans_arr[4][4], int var_arr[3], int *i);
int		spcase(int header[4][4], int r, int c);
int		validity_ch(int header[4][4], int ans_arr[4][4], int var_arr[3]);
int		valid_ltor(int check, int header[4][4], int ans_arr[4][4], int *v_arr);
int		valid_rtol(int check, int header[4][4], int ans_arr[4][4], int *v_arr);
int		valid_uptod(int check, int header[4][4], int ans_arr[4][4], int *v_arr);
int		valid_dtoup(int check, int header[4][4], int ans_arr[4][4], int *v_arr);
void	print_ans(int ans_arr[4][4]);

int	solve(int header[4][4])
{
	int	ans_arr[4][4];
	int	r;
	int	c;
	int	done;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			ans_arr[r][c] = -1;
			c++;
		}
		r++;
	}
	if (init_ans (header, ans_arr) == 1)
		return (1);
	done = sands (header, ans_arr, 0, 0);
	if (done == 0)
		print_ans(ans_arr);
	else
		write(1, "error\n", 6);
	return (1);
}
/* for check on the ans_arr 
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
            printf("%d",ans_arr[i][j]);
        printf("\n");
    }
*/
/*int main ()
{
    int arr[4][4]={{1,2,3,2},{1,3,1,2},{2,2,2,2},{4,2,4,2}};
    solve(arr);

}*/

int	sands(int header[4][4], int ans_arr[4][4], int row, int col)
{
	int	var_arr[3];
	int	i;

	var_arr[0] = row;
	var_arr[1] = col;
	i = 0;
	if (row == 4)
		return (0);
	else if (col == 4)
		return (sands (header, ans_arr, row + 1, 0));
	else if (ans_arr[row][col] != -1)
		return (sands (header, ans_arr, row, col + 1));
	else
	{
		if ((check (header, ans_arr, var_arr, &i)) == 0)
			return (0);
		else
			return (1);
	}
}

int	check(int header[4][4], int ans_arr[4][4], int var_arr[3], int *i)
{
	int	r;
	int	c;

	r = var_arr[0];
	c = var_arr[1];
	while (++ *i < 5)
	{
		if (*i == 4 && (r == 0 || r == 3 || c == 0 || c == 3))
		{
			if (spcase (header, r, c) == 1)
				continue ;
		}
		var_arr[2] = *i;
		if (validity_ch (header, ans_arr, var_arr) == 0)
		{
			if (sands (header, ans_arr, r, c + 1) == 0)
				return (0);
			ans_arr[r][c] = -1;
		}
		else
			ans_arr[r][c] = -1;
	}
	return (1);
}

int	spcase(int header [4][4], int r, int c)
{
	if (r == 0 && (header[0][c] == 2 || header[0][c] == 3))
		return (1);
	if (r == 3 && (header[1][c] == 2 || header[1][c] == 3))
		return (1);
	if (c == 0 && (header[2][r] == 2 || header[2][r] == 3))
		return (1);
	if (c == 3 && (header[3][r] == 2 || header[3][r] == 3))
		return (1);
	return (0);
}

int	validity_ch(int header[4][4], int ans_arr[4][4], int var_arr[3])
{
	ans_arr[var_arr[0]][var_arr[1]] = var_arr[2];
	if (valid_ltor (0, header, ans_arr, var_arr) == 1)
		return (1);
	if (valid_uptod (0, header, ans_arr, var_arr) == 1)
		return (1);
	if (valid_rtol (0, header, ans_arr, var_arr) == 1)
		return (1);
	if (valid_dtoup (0, header, ans_arr, var_arr) == 1)
		return (1);
	return (0);
}
