#include<stdio.h>
#include<unistd.h>

void	ft_putstr(char *str)
{
	str = "qwertypoi";
	write(1, &str, 1); 
}
int	main(void)
{
	char c;
	c = "a";
	ft_putstr(&c);
}

