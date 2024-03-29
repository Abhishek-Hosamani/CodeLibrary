#include <bits/stdc++.h>
using namespace std;
#define N 4

void multiply(int mat1[][N],
              int mat2[][N],
              int res[][N])
{
    int i, j, k;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}

int main()
{
    int i, j;
    int res[N][N];

    int mat1[N][N] = {{1, 1, 1, 1},
                      {2, 2, 2, 2},
                      {3, 3, 3, 3},
                      {4, 4, 4, 4}};

    int mat2[N][N] = {{1, 1, 1, 1},
                      {2, 2, 2, 2},
                      {3, 3, 3, 3},
                      {4, 4, 4, 4}};

    multiply(mat1, mat2, res);

    cout << "Result matrix is " << endl;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            cout << res[i][j] << " ";

        cout << endl;
    }

    return 0;