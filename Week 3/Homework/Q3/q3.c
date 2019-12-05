#include <stdio.h>

/*
	Write a program that:
		- reads integer N and
		- reads NxN matrix from console
	and returns the difference of diagonal sums of matrix.
	
	Example 1:
		Input:
			4
			1 2 3 4
			4 3 2 1
			7 8 9 6
			6 5 4 3
		Output:
			(1+3+9+3) - (4+2+8+6) = 16-20 = -4
	Example 2:
		Input:
			3
			1 1 1
			1 1 1
			1 1 1
		Output:
			0		
*/

int matrix_diagonal_sum_difference(int n, int matrix[][n]) {
	int result = 0;
	
	for (int r = 0; r < n; r++) {
		result += matrix[r][r] - matrix[r][n-r-1];
	}
	
	return result;
}

int main() {
	int N = -1;
	scanf("%d", &N);

	if (N < 1) {
		perror("N cannot be less than 1!");
		return 1;
	}

	int matrix[N][N];

	for(int r = 0; r < N; r++) {
		for(int c = 0; c < N; c++) {
			scanf(" %d", &matrix[r][c]);
		}
		// scanf
	}

	printf("result: %d", matrix_diagonal_sum_difference(N, matrix));

	return 0;
}
