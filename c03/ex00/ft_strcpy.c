#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return dest;
}

int	main(void)
{
	char	source[] = "Hello World!";
	char	destination[50];
	ft_strcpy(destination, source);
	printf("%s\n", destination);


}
