/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:49:01 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/12 12:03:09 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start;

	i = 0;
	start = 1; 
	while(str[i] != '\0' )
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
		{
			if(start && str[i] > 'a' && str[i] < 'z' && start)
			{
				str[i] -= 32;
			}
			else if(!start && (str[i] >= 'A' && str[i] <= 'Z'))
			{
				str[i] += 32;
			}
			start = 0;
		}
		else 
		{
			start = 1;
		}
		i++; 
	}
	return (str);
}

int	main(void)
{
	char test[] = "QerqopeERQERQ rqeporiuIqr qQRE5 qer";
	
	printf("Before %s \n", test);
	ft_strcapitalize(test);
	printf("After %s \n", test);
	return (0);
}
