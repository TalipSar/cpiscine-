/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moganatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:32:25 by moganatr          #+#    #+#             */
/*   Updated: 2025/02/16 16:41:26 by moganatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>

void	write_num(int n);
void	print_grid(int grid[4][4]);
void	init_grid(int grid[4][4]);
int		parse_input(char *str, int views[16]);
int		check_duplicate(int grid[4][4], int row, int col, int num);
int		count_visible(int arr[4]);
int		check_view(int arr[4], int expected, int reverse);
int		is_valid_grid(int grid[4][4], int views[16]);

#endif
