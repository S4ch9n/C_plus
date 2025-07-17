// Inplace rotate matrix 90 degree

#include <iostream>
using namespace std;

void inplaceRotate(vector<vector<int>> &inputArray)
{
    // Write your code here.
       // Step 1: Transpose the matrix
    for (int i = 0; i < inputArray.size() ; ++i) {
        for (int j = i + 1; j < inputArray.size(); ++j) {
            swap(inputArray[i][j], inputArray[j][i]);
        }
    }

    // Step 2: Reverse each column
    for (int j = 0; j < inputArray.size(); ++j) {
        int top = 0, bottom = inputArray.size() - 1;
        while (top < bottom) {
            swap(inputArray[top][j], inputArray[bottom][j]);
            top++;
            bottom--;
        }
    }
}