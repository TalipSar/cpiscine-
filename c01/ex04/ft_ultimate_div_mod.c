/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:53:48 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/06 16:30:41 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{ 	
	int tempa; 
	int tempb; 
	tempa = *a / *b; 
	tempb = *a % *b; 
	*a = tempa; 
	*b = tempb;   

}
int	main(void)
{
	int a = 5; 
	int b = 2;
	
	ft_ultimate_div_mod(&a, &b); 
	printf("%d\n", a); 
	printf("%d\n", b); 
}
