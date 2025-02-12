/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 09:46:44 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/12 08:39:12 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*destdeb;

	destdeb = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (destdeb);
}
/*
int	main(void)
{
	char	source[] = "zmacPgJOcDxGTvO0uux"; 
	char	destination[50];

	ft_strcpy(destination, source);
	printf("%s\n", destination);
}
*/
