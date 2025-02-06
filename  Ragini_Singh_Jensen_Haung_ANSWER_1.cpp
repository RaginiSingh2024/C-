
//Question 1. Create a Program for matrix Addition 2D Array ?
// # Function to add two matrices
// def add_matrices(matrix1, matrix2):
//     # Check if the matrices have the same dimensions
//     if len(matrix1) != len(matrix2) or len(matrix1[0]) != len(matrix2[0]):
//         raise ValueError("Matrices must have the same dimensions")
    
//     # Initialize the result matrix with the same dimensions as the input matrices
//     result = [[0 for _ in range(len(matrix1[0]))] for _ in range(len(matrix1))]
    
//     # Perform matrix addition
//     for i in range(len(matrix1)):
//         for j in range(len(matrix1[0])):
//             result[i][j] = matrix1[i][j] + matrix2[i][j]
    
//     return result

// # Example matrices
// matrix1 = [
//     [1, 2, 3],
//     [4, 5, 6],
//     [7, 8, 9]
// ]

// matrix2 = [
//     [9, 8, 7],
//     [6, 5, 4],
//     [3, 2, 1]
// ]

// # Add the matrices
// try:
//     result_matrix = add_matrices(matrix1, matrix2)
    
//     # Print the result
//     print("Result of matrix addition:")
//     for row in result_matrix:
//         print(row)
// except ValueError as e:
//     print(e)