/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 08:57:17 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/11 08:54:21 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while(i < str[i])
        {
                i++;
        }
        return (i);
}
/*
int     main(void)
{
        char str[] = "Tugce";
        int i;
        i = ft_strlen(str);
        printf("%d", i);
}
*/

