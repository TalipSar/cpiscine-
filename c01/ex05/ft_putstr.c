#include<stdio.h>
#include<unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}

void	ft_putstr(char *str)
{
	int i; 

	i = 0;

	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}


	write(1, &str, 1); 
}
int	main(void)
{
	char *str;
	str = "salut";
	ft_putstr(str);
	return (0);
}

