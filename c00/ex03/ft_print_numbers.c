/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <tsaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:41:11 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/05 16:16:06 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}*/
