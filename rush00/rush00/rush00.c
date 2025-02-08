/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:06:42 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/08 16:20:22 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int col, int row, int x, int y)
{
	if ((row > 1 && row < x) && (col > 1 && col < y))
	{
		ft_putchar(' ');
	}
	else if ((row > 1 && row < x) && (col == 1 || col == y))
	{
		ft_putchar('-');
	}
	else if ((col > 1 && col < y) && (row == 1 || row == x))
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar('o');
	}
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	col = 1;
	while (col <= y)
	{
		row = 1;
		while (row <= x)
		{
			print_char(col, row, x, y);
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
