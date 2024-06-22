
int valid_ltor(int header[4][4], int ans_arr[4][4], int v_arr[3],int check)
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
int valid_rtol(int header[4][4], int ans_arr[4][4], int v_arr[3]);
int valid_uptod(int header[4][4], int ans_arr[4][4], int v_arr[3]);
int valid_dtoup(int header[4][4], int ans_arr[4][4], int v_arr[3]);
