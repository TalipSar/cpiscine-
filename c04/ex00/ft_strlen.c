#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(i < str[i])
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char str[] = "Tugce";
	int i;
	i = ft_strlen(str);
	printf("%d", i);
}
*/
