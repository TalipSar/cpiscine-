void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 1;
	while(row <= y)
	{
		col = 1;
		while(col <= x)
		{
			if ((row == 1 && col == 1) || ((row == y && col == x) && row != 1 && col != 1))
			{
				ft_putchar('/');
			}
			else if ((row == 1 && col == x) || (row == y && col == 1))
			{
				ft_putchar('\\');
			}
			else if ((col == 1 && row > 1 && row < y) || ((col == x && row > 1) && row < y))
			{
				ft_putchar('*');
			}
			else
			{
				ft_putchar(' ');
			}
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
