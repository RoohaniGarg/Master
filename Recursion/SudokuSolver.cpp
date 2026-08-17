#include <iostream>
#include <climits>
#include <cstring>
#include <vector>
using namespace std;
bool canplace(vector<vector<char>>&board, char &x, int &row, int &col) {
    //checks current row
    for (int c = 0; c < 9; c++) {
        if (board[row][c] == x) {
            return false;
        }
    }
    //checks current column
    for (int r = 0; r < 9; r++) {
        if (board[r][col] == x) {
            return false;
        }
    }
    //check the submatrix
    int sx = (row / 3) * 3;
    int sy = (col / 3) * 3;
    for (int i = sx; i < sx + 3; i++) {
        for (int j = sy; j < sy + 3; j++) {
            if (board[i][j] == x) {
                return false;
            }
        }
    }
    return true;

}
bool f(vector<vector<char>>&board, int r, int c) {
    if (r == 9) {
        return true;
        //sudoku solved
    }
    if (c == 9) {
        //current state: f(x,9) so next row ki start pe jaare
        return f(board, r + 1, 0);
    }
    if (board[r][c] != '.') {
        //number already present.
        return f(board, r, c + 1);
    }
    for (char x = 49; x <= '9'; x++) {
        //checking the current x if it can be placed here or not.
        if (canplace(board, x, r, c) == 1) {
            board[r][c] = x;
            bool smallans = f(board, r, c + 1);
            if (smallans == 1) {
                return true;
            }
            //board[r][c]='.'; har loop me hata rhe h but idhar apneaap update ho skta hai
        }
    }
    board[r][c] = '.'; //backtrack yha krna is better loop end hone ke baad
    //current state: f(board, r, c)
    //recursion agr yaha aagya toh vo sudoku solve nahi kr paya iss state pe piche jao
    return false;
}
void solveSudoku(vector<vector<char>>&b) {
    bool useless = f(b, 0, 0);
    return;
}


int main() {
    vector<vector<char>> board(9, vector<char>(9));
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> board[i][j];
        }
    }
    solveSudoku(board);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}