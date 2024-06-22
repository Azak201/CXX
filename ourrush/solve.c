#include<stdio.h>

void init_ans(int header[4][4] ,int ans_arr[4][4]);
int sands(int header[4][4], int ans_arr[4][4], int row, int col);
int check (int header[4][4], int ans_arr[4][4], int  r,int c);
int spcase(int header [4][4], int ans_arr[4][4], int r, int c);
int validity_ch(int header[4][4], int ans_arr[4][4],int var_arr[3]);
int valid_ltor(int header[4][4], int ans_arr[4][4], int v_arr[3]);
int valid_rtol(int header[4][4], int ans_arr[4][4], int v_arr[3]);
int valid_uptod(int header[4][4], int ans_arr[4][4], int v_arr[3]);
int valid_dtoup(int header[4][4], int ans_arr[4][4], int v_arr[3]);

int solve(int head[4][4])
{
    int ans_arr[4][4];
    int r;
    int c;
    int done;


    r = 0;
    while (r < 4)
    {
        c = 0;
        while (c < 4)
        {
            ans_arr[r][c] = 0;
            c++;
        } 
        r++;
    }
    r = 0;
    c = 0;
    init_ans(head, ans_arr);
    done = sands(head,ans_arr, r, c);

    return (0);
}
/* for cheak on the ans_arr 
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
int sands(int header[4][4], int ans_arr[4][4], int row, int col)
{
    while (row < 4)
    {
        while (col < 4)
        {
            if (ans_arr[row][col] == 0)
            {
                if(check(header, ans_arr, row, col) == 1)
                    return 1;
                else 
                    return 0;
            }
            col ++;
        }
        row ++;
    }
}

int check (int header[4][4], int ans_arr[4][4], int  r,int c)
{
    int var_arr[3];
    int i;

    var_arr[0] = r;
    var_arr[1] = c;
    i = -1;
    while (++i < 4)
    {
        if (i == 4 && ( r == 0 || r == 3 || c == 0 || c == 3))
        {
            if (spcase(header, ans_arr , r , c) == 0)
                return(0);
            continue;
        }
        var_arr[2] = i;
        if (validity_ch(header, ans_arr, var_arr)==1)
        {
            if (sands(header, ans_arr, r, c+1) == 1)
                return (1);
            ans_arr[r][c] = 0;
        }
        else 
            ans_arr[r][c] = 0;
    }
    return(0);
}

int spcase(int header [4][4], int ans_arr[4][4], int r, int c)
{
    if (r == 0 && (header[0][c] != 1 || header[0][c] != 4))
        return (0);
    else if(r == 3 && (header[1][c]!= 1 || header[1][c] != 4))
        return (0);
    else if(c == 0 && (header[2][r] != 1 || header[2][r] != 4))
        return (0);
    else if(c == 0 && (header[3][r] != 2 || header[3][r] != 4))
        return (0);
    return (1);  
}

int validity_ch(int header[4][4], int ans_arr[4][4],int var_arr[3])
{
    ans_arr[var_arr[0]][var_arr[1]]=var_arr[2];
    if (valid_ltor(header, ans_arr, var_arr) == 0)
        return (0);
    if (valid_ltor(header, ans_arr, var_arr) == 0)
        return (0);
    if (valid_ltor(header, ans_arr, var_arr) == 0)
        return (0);
    if (valid_ltor(header, ans_arr, var_arr) == 0)
        return (0);
    return (1);

}