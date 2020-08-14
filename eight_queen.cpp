#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<vector<string>> res;

vector<vector<string>> place_queen(int n)
{
	// '.' for empty grid, 'Q' for queen
	vector<string> board(n, string(n, '.'));
    backtrack(board, 0);
    return res;
} 

void backtrack(vector<string>& borad, int row)
{
	if (row == board.size()) 
	{
        res.push_back(board);
        return;
    }

    int n = board[row].size();
    for (int col = 0; col < n; col++) 
    {
        if (!isValid(board, row, col)) 
            continue;
        board[row][col] = 'Q';
        backtrack(board, row + 1);
        board[row][col] = '.';
    }
}

int main()
{
	vector<vector<string>> res = place_queen(10);
	for (int i = 0; i < res.size; i++)
	{
		for (int j = 0; j < 10)
			cout << res[i][j];
		cout << endl;
	}

	return 0;

}