# BruteForce Solution
 - Space Complexity: O(m * n) here m and n are number of rows and number of columns
 - Time Complexity : O(m * n)

## Intuition
 - Check each cell if it is 0 then make it's entire row and column

## Approach
 - take one dummyMatrix exactly same as given Matrix
 - Now traverse the matrix, if cell is 0 then make it entire row and column zero in dummyMatrix
 - Lastly copy all elements from dummy to given matrix

 # Better Solution
 - Space Complexity: O(m + n) here m and n are number of rows and number of columns
 - Time Complexity : O(m * n)

## Intuition
 - If I somehow, create one row array of size m and col array of size n, then if cell is zero then mark that in row array and col array

## Approach
 - Initialize a row array and col array of size m and n respectively with all values 0
 - Now traverse the matrix, if cell is 0 then set it row index in row array as 1,and set it column index in col array to be 1
 - Now again traverse the matrix,for each cell check if there row or col is marked as 1, if it is then make that cell equal to 0

# Optimal Solution
 - Space Complexity: O(1)
 - Time Complexity : O(m * n)

## Intuition
 - we will use the 1st row and 1st column of the given matrix to keep a track of the cells that need to be marked with 0.

## Approach
 - First, we will traverse the matrix and mark the proper cells of 1st row and 1st column with 0 accordingly. The marking will be like this: if cell(i, j) contains 0, we will mark the i-th row i.e. matrix[i][0] with 0 and we will mark j-th column i.e. matrix[0][j] with 0.
- If i is 0, we will mark matrix[0][0] with 0 but if j is 0, we will mark the col0 variable with 0 instead of marking matrix[0][0] again.
- After step 1 is completed, we will modify the cells from (1,1) to (n-1, m-1) using the values from the 1st row, 1st column, and col0 variable.
- We will not modify the 1st row and 1st column of the matrix here as the modification of the rest of the matrix(i.e. From (1,1) to (n-1, m-1)) is dependent on that row and column.
- Finally, we will change the 1st row and column using the values from matrix[0][0] and col0 variable. Here also we will change the row first and then the column.
- If matrix[0][0] = 0, we will change all the elements from the cell (0,1) to (0, m-1), to 0.
- If col0 = 0, we will change all the elements from the cell (0,0) to (n-1, 0), to 0.
