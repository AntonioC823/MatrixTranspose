#include <iostream>
#include <vector>

std::vector<std::vector<int>> transposeMatrix(std::vector<std::vector<int>> matrix);

int main()
{
	std::vector<std::vector<int>> newMatrix = transposeMatrix({ { 1, 2, 3 }, { 1, 2, 3 } });

	int rowSize = newMatrix.size(), columnSize = newMatrix[0].size();

	for (int m = 0; m < rowSize; m++)
	{
		for (int n = 0; n < columnSize; n++)
		{
			std::cout << newMatrix[m][n] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}

std::vector<std::vector<int>> transposeMatrix(std::vector<std::vector<int>> matrix)
{
	std::vector<std::vector<int>> transposedMatrix;

	// Use a column index to iterate through each column
	// The size of the first element in the argument will return the number of columns in the matrix
	int column = 0, numberOfColumns = matrix[0].size();

	// Loop will iterate through each column
	// Each column will be the new row in the transposed matrix
	while (column < numberOfColumns)
	{
		// Create new row for transposed elements
		// Store each new row into transposedArr vector
		std::vector<int> newRow;
		for (int row = 0; row < matrix.size(); row++)
		{
			newRow.push_back(matrix[row][column]);
		}
		column++;
		transposedMatrix.push_back(newRow);
	}

	return transposedMatrix;
}
