/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:57:49 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/22 15:13:57 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	char		joinedStr[12];

	while (size > 0 && **strs)
	{
		i = 0;
		k = 0;
		while (i < size)
		{
			j = 0;
			while (strs[i][j] != '\0')
			{
				joinedStr[k] = strs[i][j];
				j++;
			}
			joinedStr[k++] = '-';
			k += j;
			i++;
		}
	}
	printf("%s", joinedStr );
}

int	main(void)
{
	char **stt = {"Salut", "Sanglot", "Signe"};
	char sep = '-';
	ft_strjoin(2, stt, &sep);
}
