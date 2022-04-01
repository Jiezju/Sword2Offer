//
// Created by Bright on 2022/4/1.
//

#include <iostream>
#include <vector>

using namespace std;

bool findInArray(vector<vector<int>> matrix, int r, int c, int target) {
    bool found = false;

    if (matrix.empty())
        return found;

    int row = r - 1;
    int col = 0;

    while (row >= 0 && col < c - 1) {
        if (matrix[row][col] == target) {
            found = true;
            return found;
        }
        else if (matrix[row][col] > target)
            row--;
        else
            col++;
    }
    return found;
}
