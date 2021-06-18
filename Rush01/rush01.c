void	put_max_on_label1(int **matrix)
{
	int	row;
	int	column;

	row = 1;
	column = 1;
	while (row <= 4)
	{
		if (matrix[row][5] == 1)
			matrix[row][4] = 4;
		if (matrix[row][0] == 1)
			matrix[row][1] = 4;
		row++;
	}
	while (column <= 4)
	{
		if (matrix[5][column] == 1)
			matrix[4][column] = 4;
		if (matrix[0][column] == 1)
			matrix[1][column] = 4;
		column++;
	}
}

void	put_sequence_on_label1_4(int **matrix)
{
	int	row;
	int	column;

	row = 1;
	column = 1;
	while (column <= 4)
	{
		if (matrix[0][column] == 1 && matrix[5][column] == 4)
		{
			matrix[1][column] = 4;
			matrix[2][column] = 3;
			matrix[3][column] = 2;
			matrix[4][column] = 1;
		}
		if (matrix[5][column] == 1 && matrix[0][column] == 4)
		{
			matrix[1][column] = 1;
			matrix[2][column] = 2;
			matrix[3][column] = 3;
			matrix[4][column] = 4;
		}
		column++;
	}
	while (row <= 4)
	{
		if (matrix[row][5] == 1 && matrix[row][0] == 4)
		{
			matrix[row][1] = 1;
			matrix[row][2] = 2;
			matrix[row][3] = 3;
			matrix[row][4] = 4;
		}
		if (matrix[row][0] == 1 && matrix[row][5] == 4)
		{
			matrix[row][1] = 4;
			matrix[row][2] = 3;
			matrix[row][3] = 2;
			matrix[row][4] = 1;
		}
		row++;
	}
}

void	put_3_on_corner(int **matrix)
{
	int	qtd_corner;

	qtd_corner = 0;
	if (matrix[0][1] == 2 && matrix[1][0] == 2)
		qtd_corner++;
	if (matrix[0][4] == 2 && matrix[1][5] == 2)
		qtd_corner++;
	if (matrix[5][4] == 2 && matrix[4][5] == 2)
		qtd_corner++;
	if (matrix[4][0] == 2 && matrix[5][1] == 2)
		qtd_corner++;
	if (qtd_corner == 1)
	{
		if (matrix[0][1] == 2 && matrix[1][0] == 2)
			matrix[1][1] = 3;
		if (matrix[0][4] == 2 && matrix[1][5] == 2)
			matrix[1][4] = 3;
		if (matrix[5][4] == 2 && matrix[4][5] == 2)
			matrix[4][4] = 3;
		if (matrix[4][0] == 2 && matrix[5][1] == 2)
			matrix[4][1] = 3;
	}
}

void	put_last_number_column(int **matrix)
{
	int	numbers[4];
	int	column;
	int	row;
	int	qtd_zeros;
	int	index;
	int	fault_number;

	column = 1;
	fault_number = 0;
	row = 1;
	while (column <= 4)
	{
		row = 1;
		qtd_zeros = 0;
		index = 0;
		while (row <= 4)
		{
			if (matrix[row][column] == 0)
				qtd_zeros++;
			else
			{
				numbers[index] = matrix[row][column];
				index++;
			}
			row++;
		}
		if (qtd_zeros == 1)
		{
			fault_number = (10 - (numbers[0] + numbers[1] + numbers[2]));
			row = 1;
			while (row <= 4)
			{
				if (matrix[row][column] == 0)
					matrix[row][column] = fault_number;
				row++;
			}
		}
		column++;
	}
}

void	put_last_number_row(int **matrix)
{
	int	numbers[4];
	int	column;
	int	row;
	int	qtd_zeros;
	int	index;
	int	fault_number;

	column = 1;
	row = 1;
	fault_number = 0;
	while (row <= 4)
	{
		column = 1;
		qtd_zeros = 0;
		index = 0;
		while (column <= 4)
		{
			if (matrix[row][column] == 0)
				qtd_zeros++;
			else
			{
				numbers[index] = matrix[row][column];
				index++;
			}
			column++;
		}
		if (qtd_zeros == 1)
		{
			fault_number = (10 - (numbers[0] + numbers[1] + numbers[2]));
			column = 1;
			while (column <= 4)
			{
				if (matrix[row][column] == 0)
					matrix[row][column] = fault_number;
				column++;
			}
		}
		row++;
	}
}

void	put_four_3_2(int **matrix)
{
	int	column;
	int	row;

	while (column <= 4)
	{
		row = 1;
		while (row <= 4)
		{
			if (matrix[0][column] == 3 && matrix[5][column] == 2)
				matrix[3][column] = 4;
			if (matrix[0][column] == 2 && matrix[5][column] == 3)
				matrix[2][column] = 4;
			if (matrix[row][0] == 3 && matrix[row][5] == 2)
				matrix[row][3] = 4;
			if (matrix[row][0] == 2 && matrix[row][5] == 3)
				matrix[row][2] = 4;
			row++;
		}
		column++;
	}
}
