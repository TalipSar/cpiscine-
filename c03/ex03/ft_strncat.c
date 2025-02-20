/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:39:15 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/18 10:51:05 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	destlen;
	unsigned int	i;

	destlen = 0;
	i = 0;
	while (dest[destlen] != '\0')
	{
		destlen++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "Bonjour aussi";
	char dest[50] = "Salutations";
	ft_strncat(dest, src, 15);
	printf("dest is  %s", dest);
}
*/
