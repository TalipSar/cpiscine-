/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moganatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:26:27 by moganatr          #+#    #+#             */
/*   Updated: 2025/02/16 17:26:34 by moganatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	write_num(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	print_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write_num(grid[i][j]);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	check_digit_space(char c, int pos)
{
	if (pos % 2 == 0)
	{
		if (c >= '1' && c <= '4')
			return (1);
	}
	else if (c == ' ')
		return (1);
	return (0);
}

int	parse_input(char *str, int views[16])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (!check_digit_space(str[i], i))
			return (0);
		if (i % 2 == 0)
			views[j++] = str[i] - '0';
		i++;
	}
	return (j == 16 && i == 31);
}
