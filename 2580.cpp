#include <algorithm>
#include <iostream>

typedef std::pair<int, int> pii;

int sudoku[10][10];
pii spots[100];
int len;
bool found = false;

bool fitsSquare(int gx, int gy, int num) {
    int nums[10] = { 0 };
    nums[num] = 1;

    for (int i = 3 * gx; i < 3 * gx + 3; i++) {
        for (int j = 3 * gy; j < 3 * gy + 3; j++) {
            if (!nums[sudoku[i][j]]) nums[sudoku[i][j]] = 1;
            else if (sudoku[i][j]) return false;
        }
    }

    return true;
}

bool fitsLine(int x, int y, int num) {
    int numsX[10] = { 0 };
    numsX[num] = 1;
    for (int i = 0; i < 9; i++) {
        if (!numsX[sudoku[i][y]]) numsX[sudoku[i][y]] = 1;
        else if (sudoku[i][y]) return false;
    }

    int numsY[10] = { 0 };
    numsY[num] = 1;
    for (int i = 0; i < 9; i++) {
        if (!numsY[sudoku[x][i]]) numsY[sudoku[x][i]] = 1;
        else if (sudoku[x][i]) return false;
    }
    return true;
}

bool fits(int x, int y, int num) {
    int gaussX = x / 3;
    int gaussY = y / 3;

    return fitsSquare(gaussX, gaussY, num) && fitsLine(x, y, num);
}

void fillin(int idx) {
    if (!found && idx == len) {
        found = true;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                std::cout << sudoku[i][j] << " ";
            }
            std::cout << std::endl;
        }
        return;
    }

    for (int i = 1; i <= 9; i++) {
        if (fits(spots[idx].first, spots[idx].second, i)) {
            sudoku[spots[idx].first][spots[idx].second] = i;
            fillin(idx + 1);

            if (found) return;
            sudoku[spots[idx].first][spots[idx].second] = 0;
        }
    }
}

int main() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            std::cin >> sudoku[i][j];
            if (!sudoku[i][j])
                spots[len++] = std::make_pair(i, j);
        }
    }

    fillin(0);

    return 0;
}
