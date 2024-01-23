#include <iostream>
#include <vector>
using namespace std;
class Matrix {
private:
    int rows;
    int cols;
    vector<vector<int>> elements;

public:
    Matrix(int numRows, int numCols) : rows(numRows), cols(numCols) {
        elements.resize(rows, vector<int>(cols, 0));
    }

    void insertElement(int row, int col, int value) {
        if (row >= 0 && row < rows && col >= 0 && col < cols) {
            elements[row][col] = value;
    cout << "Element inserted successfully." << endl;
        } else {
            cout << "Invalid position. Element not inserted." << endl;
        }
    }

    int getElement(int row, int col) const {
        if (row >= 0 && row < rows && col >= 0 && col < cols) {
            return elements[row][col];
        } else {
            cout << "Invalid position. Returning 0." << endl;
            return 0;
        }
    }

    // Function to display the matrix
    void displayMatrix() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << elements[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix matrix(3, 3);
    matrix.insertElement(0, 0, 1);
    matrix.insertElement(0, 1, 2);
    matrix.insertElement(0, 2, 3);
    matrix.insertElement(1, 0, 4);
    matrix.insertElement(1, 1, 5);
    matrix.insertElement(1, 2, 6);
    matrix.insertElement(2, 0, 7);
    matrix.insertElement(2, 1, 8);
    matrix.insertElement(2, 2, 9);
    cout << "Matrix:" << endl;
    matrix.displayMatrix();
    int element = matrix.getElement(1, 1);
    cout << "\nElement at position (1, 1): " << element << endl;

    return 0;
}
