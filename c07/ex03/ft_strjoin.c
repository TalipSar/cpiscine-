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

#include <stdlib.h>
#include <string.h>

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += strlen(strs[i]);
		if (i < size - 1)
			total_len += strlen(sep);
		i++;
	}
	return (total_len);
}

char	*fill_result_string(int size, char **strs, char *sep, int total_len)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	result = malloc(sizeof(char) * (total_len + 1));
	if (!result)
		return (NULL);
	total_len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			result[total_len++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
				result[total_len++] = sep[j++];
		}
		i++;
	}
	result[total_len] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*result;

	if (size == 0)
	{
		result = malloc(1);
		if (result != NULL)
			result[0] = '\0';
		return (result);
	}
	total_len = calculate_total_length(size, strs, sep);
	return (fill_result_string(size, strs, sep, total_len));
}
/*
#include <stdio.h>
int main(void)
{
    char *strs[] = {"Hello", "world", "this", "is", "a", "test"};
    int size = 6;
    char *sep = "-";

    char *result = ft_strjoin(size, strs, sep);
    if (result != NULL)
    {
        printf("Résultat : %s\n", result);
        free(result);
    }
    else
    {
        printf("Erreur d'allocation mémoire.\n");
    }
    return 0;
}
*/
