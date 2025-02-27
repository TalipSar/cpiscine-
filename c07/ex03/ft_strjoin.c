/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaritas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:57:49 by tsaritas          #+#    #+#             */
/*   Updated: 2025/02/26 12:58:02 by tsaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_sl(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strlen(int size, char **strs)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_sl(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src, char *sep, int is_last)
{
	int	destlen;
	int	i;

	destlen = 0;
	i = 0;
	while (dest[destlen] != '\0')
		destlen++;
	while (src[i] != '\0')
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
	}
	if (!is_last)
	{
		i = 0;
		while (sep[i] != '\0')
		{
			dest[destlen] = sep[i];
			i++;
			destlen++;
		}
	}
	dest[destlen] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;
	int		total;

	if (size == 0)
	{
		join = (char *)malloc(1);
		if (join == NULL)
			return (NULL);
		join[0] = '\0';
		return (join);
	}
	total = ft_strlen(size, strs) + (size - 1) * ft_sl(sep);
	join = (char *)malloc(sizeof(char) * (total + 1));
	if (join == NULL)
		return (NULL);
	join[0] = '\0';
	i = 0;
	while (i < size)
	{
		join = ft_strcat(join, strs[i], sep, (i == size - 1));
		i++;
	}
	return (join);
}
/*
#include <stdio.h>
int main(void)
{
    char *s1[] = {"Mot1", "Mot2", "Mot3"};
    int size = 3;
    char *sep = "********";

    char *result = ft_strjoin(size, s1, sep);
    if (result != NULL)
    {
        printf("%s\n", result);
        free(result);
    }
    else
    {
        printf("Erreur mémoire.\n");
    }
    return 0;
}
*/
