/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 07:55:18 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/10 08:16:59 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_char(int col, int row, int x, int y)
{
	if ((col == 1 && row == 1) || (col == x && row == y) && x > 1 && y > 1)
	{
		ft_putchar('A');
	}
	else if ((col == x && row == 1) || (col == 1 && row == y))
	{
		ft_putchar('C');
	}
	else if (col == 1 || col == x || row == 1 || row == x)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	row;
	int	col; 

	if (x <= 0 || y <= 0)
	{
		return;
	}
	row = 1; 
	while (row <= y)
	{
		col = 1; 
		while (col <= x)
		{
			print_char(col, row, x, y);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
			
}
int	main(void)
{
	rush(1, 1);
}
