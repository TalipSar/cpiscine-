/
************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <tsaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:52:48 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/05 16:10:10 by tsaritas         ###   ########.fr       */
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
	else
	{
		write(1, &p, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(-9);
	ft_is_negative(0);
	ft_is_negative(-100);
	ft_is_negative(-1);
}*/
