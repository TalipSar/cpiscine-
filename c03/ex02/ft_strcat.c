/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:04:43 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/17 13:35:05 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	destlen;

	destlen = 0;
	while (dest[destlen] != '\0')
	{
		destlen++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char src[] = "Salutations";
	char dest[50] = "et toi?";

	ft_strcat(dest, src);
	printf("Dest contains %s", dest);
}
*/
