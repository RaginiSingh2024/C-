#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = INT_MIN, minVal = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(arr[i] > maxVal) maxVal = arr[i];
        if(arr[i] < minVal) minVal = arr[i];
    }

    cout << "Maximum Value: " << maxVal << endl;
    cout << "Minimum Value: " << minVal << endl;

    return 0;
}





#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reversing the array
    for(int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }

    cout << "Reversed Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int evenCount = 0, oddCount = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Number of Even Integers: " << evenCount << endl;
    cout << "Number of Odd Integers: " << oddCount << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value to search for: ";
    cin >> target;

    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            cout << "Value found at index " << i << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Value not found in the array." << endl;
    }

    return 0;
}






#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n], reversedArr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Copy and reverse
    for(int i = 0; i < n; i++) {
        reversedArr[i] = arr[n - i - 1];
    }

    cout << "Reversed Array: ";
    for(int i = 0; i < n; i++) {
        cout << reversedArr[i] << " ";
    }

    return 0;
}










#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first = INT_MIN, second = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "Second Largest Element: " << second << endl;
    }

    return 0;
}








#include <iostream>
using namespace std;

int main() {
    int positive = 0, negative = 0, odd = 0, even = 0, zero = 0;
    int num;

    cout << "Enter 20 integer values: \n";
    for(int i = 0; i < 20; i++) {
        cin >> num;
        
        if(num > 0) positive++;
        else if(num < 0) negative++;
        else zero++;
        
        if(num % 2 == 0) even++;
        else odd++;
    }

    cout << "Number of Positive Numbers: " << positive << endl;
    cout << "Number of Negative Numbers: " << negative << endl;
    cout << "Number of Odd Numbers: " << odd << endl;
    cout << "Number of Even Numbers: " << even << endl;
    cout << "Number of Zeros: " << zero << endl;

    return 0;
}






#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;
    cout << "Enter the dimensions of Matrix A (m x n): ";
    cin >> m >> n;
    cout << "Enter the dimensions of Matrix B (p x q): ";
    cin >> p >> q;

    if (n != p) {
        cout << "Matrix multiplication is not possible!" << endl;
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];
    
    // Input Matrix A
    cout << "Enter elements of Matrix A:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Input Matrix B
    cout << "Enter elements of Matrix B:" << endl;
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            cin >> B[i][j];
        }
    }

    // Initialize matrix C
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            C[i][j] = 0;
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display Result
    cout << "Product of Matrix A and Matrix B is:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}






#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the dimensions of the matrix (m x n): ";
    cin >> m >> n;

    int A[m][n], B[n][m];

    // Input Matrix A
    cout << "Enter elements of the matrix:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Transpose the matrix
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            B[j][i] = A[i][j];
        }
    }

    // Display Transposed Matrix
    cout << "Transposed Matrix is:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
           
