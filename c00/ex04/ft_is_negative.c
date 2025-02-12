/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:10:56 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/11 08:05:48 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int a)
{
	char	i;
	char	n;
	char	p;

	n = 'N';
	p = 'P';
	i = a;
	if (i < 0)
	{
		write(1, &n, 1);
	}
	else if (a == -2147483648)
	{
		write(1, &n, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(-555555);
	ft_is_negative(0);
	ft_is_negative(-21474838);
	ft_is_negative(-1);
}
*/
