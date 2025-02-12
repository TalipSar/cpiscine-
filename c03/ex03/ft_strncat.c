#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	destlen;
	int	i;

	destlen = 0;
	i = 0;

	while(dest[destlen] != '\0')
	{
		destlen++; 
	}
	while(src[i] != '\0' && i < nb)
	{
		dest[destlen +i ] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}

int	main(void)
{
	char src[] = "Bonjour aussi";
	char dest[50] = "Salutations";
	*ft_strncat(dest, src, 15);
	printf("dest is  %s", dest);
}
