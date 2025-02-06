29. Matrix Addition
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    int matrix1[m][n], matrix2[m][n], result[m][n];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix1[i][j];

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix2[i][j];

    // Adding matrices
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            result[i][j] = matrix1[i][j] + matrix2[i][j];

    cout << "Resultant Matrix after Addition:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}
