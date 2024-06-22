
void sol_1(int ans_arr[4][4], int row, int col);

void sol_4(int ans_arr[4][4], int row, int col);

void init_ans(int header[4][4] ,int ans_arr[4][4])
{
    int i;
    int j;

    i = 0;
    while (i<4)
    {
        j = 0;
        while (j < 4)
        {
            if (header[i][j] == 1)
                sol_1 (ans_arr, i, j);
            if (header[i][j] == 4)
                sol_4 (ans_arr, i,j);
            j ++;
        }
        i++;
    }
    
}

void sol_1(int ans_arr[4][4], int h_row, int h_col)
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
void sol_4(int ans_arr[4][4], int h_row, int h_col)
{
     int i;
    int val;

    i = -1;
    val =5;
    while(++i < 4 && --val )
    {
        if (h_row == 0)
            ans_arr[i][h_col]= i + 1;
        else if (h_row == 1)
            ans_arr[i][h_col]= val;
    }
    i = -1;
    val =5;
    while(++i < 4 && --val )
    {   
        if (h_row == 2)
            ans_arr[h_col][i]= i + 1;
        else if (h_row == 3)
            ans_arr[h_col][i]= val  ;
    }
}