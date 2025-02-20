/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 08:38:44 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/10 16:42:29 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	int		is_negative;
	char	str[12];

	i = 0;
	is_negative = 0;
	if (nb == 0)
		ft_putchar('0');
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (nb > 0)
	{
		str[i++] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (is_negative)
	{
		str[i++] = '-';
	}
	while (-- i >= 0)
		ft_putchar(str[i]);
}
/*
int	main(void)
{
	int	i;

	i = 0;
	ft_putnbr(i);
	ft_putnbr(6);
	ft_putnbr(-156);
}
*/
