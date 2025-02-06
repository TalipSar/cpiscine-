/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:45:39 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/06 15:42:35 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int tempdiv;
	int tempmod;

//	tempdiv = a / b; 
//	tempmod = a % b;
	*div = a / b;
	*mod = a % b;
}
int	main(void)
{
	int div1 = 5;
	int div2 = 2;
	int rom;
	int ram; 	
	ft_div_mod(div1, div2, &rom, &ram);	
	printf("%d\n", rom);
	printf("%d\n", ram);
}
