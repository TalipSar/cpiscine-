//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while((s1[i] && s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}
		else
		{
			i++;
		}
		
	}
	return s1[i] - s2[i];
}
/*
int	main(void)
{
	char s1[] = "ABBBC";
	char s2[] = "CBBBC";
	int i = ft_strncmp(s1, s2, 5);
	printf("%d", i);
}*/
