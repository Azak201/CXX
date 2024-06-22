#include <stdio.h>
#include <unistd.h>

int	solve(int *head);

void	cond(int *added, int *j)
{
	*added = *added + 1;
	if (*added == 4)
	{
		*added = 0;
		*j = *j + 1;
	}
}

int	input_toint(char *arr, int number[4][4])
{
	int	count;
	int	added;
	int	j;

	count = 0;
	j = 0;
	added = 0;
	while (arr[count] != 0)
	{
		if ((arr[count] == 32))
			count++;
		if ((arr[count] != '\0') && (arr[count] >= '1' && arr[count] <= '4'))
		{
			number[j][added] = arr[count] - 48;
			cond(&added, &j);
			count++;
		}
		else
			count ++;
	}
	if (j == 4 && added == 0)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	headers[4][4];

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
