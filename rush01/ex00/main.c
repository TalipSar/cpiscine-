/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moganatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:31:23 by moganatr          #+#    #+#             */
/*   Updated: 2025/02/16 14:31:32 by moganatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	init_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	solve(int grid[4][4], int views[16], int pos)
{
	int	row;
	int	col;
	int	num;

	if (pos == 16)
		return (is_valid_grid(grid, views));
	row = pos / 4;
	col = pos % 4;
	num = 1;
	while (num <= 4)
	{
		if (check_duplicate(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, views, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	views[16];
	int	grid[4][4];

	if (argc != 2 || !parse_input(argv[1], views))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	init_grid(grid);
	if (!solve(grid, views, 0))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	print_grid(grid);
	return (0);
}
