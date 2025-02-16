#include <stdlib.h>
//#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	       
	dest = malloc(sizeof(*src));

	if (dest == NULL)
	{
		return(NULL);
	}
	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	
	return (dest);
}
/*
int	main(void)
{
	char src[] = "Salutation";
	ft_strdup(src);
	printf("%s", src);
}
*/
