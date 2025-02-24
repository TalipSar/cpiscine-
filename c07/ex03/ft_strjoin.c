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

char	*ft_strcat(char *dest, char *src, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = sep[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_single_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strlen(int size, char **strs)
{
	int	letter;
	int	i;

	letter = 1;
	i = 0;
	while (i < size)
	{
		letter += ft_single_len(strs[i]);
		i++;
	}
	return (letter);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		len;
	int		i;

	if (size == 0)
	{
		join = (char *)malloc(sizeof(char));
		return (join);
	}
	len = ft_strlen(size, strs);
	join = (char *)malloc((len + (size - 1) * ft_single_len(sep)) * sizeof(char *) + 1);
	if (!join)
		return (NULL);
	join[0] = '\0';
	i = 0;
	while (i < size)
	{
		if (i == size - 1)
			join = ft_strcat(join, strs[i], "\0");
		else
			join = ft_strcat(join, strs[i], sep);
		i++;
	}
	return (join);
}


#include <stdio.h>
int main(void)
{
    char *strs[] = {"Hello", "world", "this", "is", "a", "test"};
    int size = 6;
    char *sep = "+";

    char *result = ft_strjoin(size, strs, sep);
    if (result != NULL)
    {
        printf("%s\n", result);
        free(result);
    }
    else
    {
        printf("Erreur d'allocation mémoire.\n");
    }
    return 0;
}

