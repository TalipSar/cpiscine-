/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moganatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:32:09 by moganatr          #+#    #+#             */
/*   Updated: 2025/02/16 14:32:11 by moganatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	check_duplicate(int grid[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	count_visible(int arr[4])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			count++;
		}
		i++;
	}
	return (count);
}

int	check_view(int arr[4], int expected, int reverse)
{
	int	temp[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		if (reverse)
			temp[i] = arr[3 - i];
		else
			temp[i] = arr[i];
		i++;
	}
	return (count_visible(temp) == expected);
}

int	is_valid_grid(int grid[4][4], int views[16])
{
	int	i;
	int	col[4];

	i = 0;
	while (i < 4)
	{
		if (!check_view(grid[i], views[i + 8], 0)
			|| !check_view(grid[i], views[i + 12], 1))
			return (0);
		col[0] = grid[0][i];
		col[1] = grid[1][i];
		col[2] = grid[2][i];
		col[3] = grid[3][i];
		if (!check_view(col, views[i], 0)
			|| !check_view(col, views[i + 4], 1))
			return (0);
		i++;
	}
	return (1);
}
