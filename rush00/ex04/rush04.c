/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsolbut <dsolbut@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:44:10 by dsolbut           #+#    #+#             */
/*   Updated: 2025/02/09 16:51:15 by dsolbut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r;
	int	c;

	if (x <= 0 || y <= 0 || x >= INT_MAX || y >= INT_MAX)
		return ;
	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((c == 1 && r == 1) || (c == x && r == y && x > 1 && y > 1))
				ft_putchar('A');
			else if ((c == x && r == 1) || (c == 1 && r == y))
				ft_putchar('C');
			else if (c == 1 || c == x || r == 1 || r == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
