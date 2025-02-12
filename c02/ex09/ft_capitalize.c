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
	while(str)
	{
		if((str[i] > 97 && str[i] < 122) && (str[i] > 65 && str[i] < 90) || (str[i] > '0' && str[i] < '9'))
		{
			if(str[i] > 97 && str[i] < 122 && start)
			{
				str[i] -= 32;
				i++;
				start = 0; 
				if(str[i] > 97 && str[i] < 122)
				{
					str -=32;
				
				}
				
			}
			else
			{
				start = 0;
				i++; 
			}
		}
		else if((str[i] == 32 && str[i] == ) ())
		{
			start = 0;
			i++; 
		}
	}
	return (str);
}

int	main(void)
{
	char test = "Qerqopeiru rqeporiuIqr qQRE5 qer"; 

	char dest = ft_strcapitalize(test);
	printf("%s", dest);
}
