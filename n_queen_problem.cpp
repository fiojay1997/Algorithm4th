#include <iostream>

using namespace std;

typedef struct
{
    int row, col;
} position;

position[] solve_n_queen(int n)
{
    position positions[];
    bool has_solution = solve_util(n, 0, positions);
    return positions;
}

bool solve_util(int n, int row, position positions[])
{
    if (n == row) return true;
    int col;
    for (col = 0; col < n; col++)
    {
        bool found_safe = true;

        for (int queen = 0; queen < row; queen++)
        {
            if (position[queen].col == col || positions[queen].row - position[queen].col
               == row - col || positions[queen].row + positions[queen].col == row + col)
            {
                found_safe = false;
                break;
            }
        }

        if (found_safe)
        {
            positions[row] = position(row, col);
            if (solve_util(n, row + 1, positions)) return true;
        }
    }
    return false;
}
