/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 08:20:21 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/06 14:03:58 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	 *********nbr = 42;
}

int	main(void){
	int a = 50; 
	int *b = &a; 
	int **c = &b; 
	int ***d = &c; 
	int ****e = &d; 
	int *****f = &e; 
	int ******g = &f;
	int *******h = &g;
	int ********i = &h;
	int *********j = &i;

	ft_ultimate_ft(&i);
	printf("%d\n", a);
}
