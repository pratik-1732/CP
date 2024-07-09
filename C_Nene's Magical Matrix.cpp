#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to print the matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

// Function to perform the operations and maximize the sum
void maximizeMatrixSum(vector<vector<int>>& matrix) {
    int n = matrix.size();
    // Since we want to maximize the sum, we can fill each row with 1 to n
    // and each column with 1 to n as well, ensuring that no two same numbers
    // are in the same row or column.
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = (i + j) % n + 1;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix (n): ";
    cin >> n;

    // Initialize the matrix with zeros
    vector<vector<int>> matrix(n, vector<int>(n, 0));

    // Perform the operations to maximize the sum
    maximizeMatrixSum(matrix);

    // Print the final matrix
    cout << "Maximized matrix:" << endl;
    printMatrix(matrix);

    return 0;
}
