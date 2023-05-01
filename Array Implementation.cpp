#include <bits/stdc++o.h>

int main()
{
    int sparse_matrix[5][4] =
        {
            {0, 0, 3, 0},
            {0, 0, 5, 7},
            {0, 0, 0, 0},
            {0, 2, 6, 0},
            {4, 0, 0, 0}};

    int size = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4; j++)
            if (sparse_matrix[i][j] != 0)
                size++;

    int new_matrix[3][size];
    int k = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4; j++)
            if (sparse_matrix[i][j] != 0)
            {
                new_matrix[0][k] = i;
                new_matrix[1][k] = j;
                new_matrix[2][k] = sparse_matrix[i][j];
                k++;
            }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
            cout << new_matrix[i][j];
        cout << endl;
    }
    return 0;
}