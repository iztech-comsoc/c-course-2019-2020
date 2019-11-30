#include <stdio.h>

/*  
    Write a program according to given instructions below:
    - Read ROW and COLUMN length from keyboard. 
		(1 <= ROW <= 10 and 1 <= COLUMN <= 10)
    - Declare a two dimensional array with respect to taken length variables named ROW and COLUMN.
    - Fill array according to given pattern below:
        ROW INDEX concatenated by COLUMN INDEX
        For example:
            array[2][1] = 21
            array[0][9] = 9
    - Print the values stored in the array, appropriately output format 
	stated in examples.
            
    # Example 1:
        Input:
            2 5
        Output:
            00 01 02 03 04 
            10 11 12 13 14

    # Example 2:
        Input: 
            10 10
        Output:
            00 01 02 03 04 05 06 07 08 09 
            10 11 12 13 14 15 16 17 18 19 
            20 21 22 23 24 25 26 27 28 29 
            30 31 32 33 34 35 36 37 38 39 
            40 41 42 43 44 45 46 47 48 49 
            50 51 52 53 54 55 56 57 58 59 
            60 61 62 63 64 65 66 67 68 69 
            70 71 72 73 74 75 76 77 78 79 
            80 81 82 83 84 85 86 87 88 89 
            90 91 92 93 94 95 96 97 98 99 
*/

int main() {
    int row = -1, column = -1;
    scanf("%d %d", &row, &column);
    
    if (row > 10 || row < 1) row = 10;
    if (column > 10 || column < 1) column = 10;
    
    // declare two dimension array    
    int array[row][column];

    // initiliaze array
    for (int r = 0; r < row; r++) {
        for(int c = 0; c < column; c++) {
            array[r][c] = (10*r) + c;
        }
    }

    // print array
    for (int r = 0; r < row; r++) {
        for(int c = 0; c < column; c++) {
            printf("%.2d ", array[r][c]);
        }
        printf("\n");
    }
}
