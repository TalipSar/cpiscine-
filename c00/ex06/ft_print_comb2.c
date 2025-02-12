/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:17:06 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/11 08:43:44 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;

	i = '0';
	j = '1';
	while (i <= '9')
	{
		while (j <= '9')
		{
			write(1, "00 ", 3);
			write(1, &i, 1);
			write(1, &j, 1);
			write(1, ", ", 2);
			j++;
		}
		j = i;
		if (i != 9)
		{
			i++;
		}
		else
		{
			i = 0;
		}
	}
}

void	ft_print_comb2(void)
{
	ft_print_comb();
	ft_print_comb();
}

int	main(void)
{
	ft_print_comb2();
}

