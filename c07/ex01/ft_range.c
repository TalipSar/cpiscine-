/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 09:36:02 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/24 10:05:33 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;

	if (min >= max)
	{
		array = NULL;
		return (array);
	}
	array = malloc(sizeof(int) * (max - min));
	if (array == NULL)
	{
		return (NULL);
	}
	while (max > min)
	{
		array[max - min - 1] = max - 1;
		max--;
	}
	return (array);
}
/*
#include <stdio.h>
int main(void)
{
    int *range;
    int min = 2;
    int max = 5;
    int i;

    range = ft_range(min, max);
    if (range != NULL)
    {
	    i = 0;
	    while (i < (max - min))
	    {
           	 printf("%d ", range[i]);
		 i++;
	    }
	    printf("\n");
    }
    else
    {
        printf("Erreur\n");
    }
    return 0;
}
*/
