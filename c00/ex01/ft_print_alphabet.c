/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <tsaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:07:18 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/10 10:01:09 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	z;

	z = 'a';
	while (z <= 'z')
	{
		write (1, &z, 1);
		z++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}
*/
