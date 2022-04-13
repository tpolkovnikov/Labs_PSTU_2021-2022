#include <iostream>
using namespace std;
int board[8][8];
int c(int c, int r)
{
    for (int i = 0; i < c; ++i){

        if (board[i][r]){
            return 0;
        }

        if (r - c + i >= 0){
            if (board[i][r - c + i] == 1){
                return 0;
            }
        }
        if (r + c - i < 8){
            if (board[i][r + c - i] == 1){
                return 0;
            }
        }
    }
    return 1;
}

int v(int i)
{
    if (i == 8){
        return 1;
    }
    for (int j = 0; j < 8; ++j){
        if ((c(i, j)) == 1){
            board[i][j] = 1;
            if ((v(i + 1)) == 1){
                return 1;
            }
            board[i][j] = 0;
        }
    }
    return 0;
}

int main()
{
    v(0);
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (board[i][j] == 1)
            {
                cout << "W ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}
