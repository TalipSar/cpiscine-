
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}

void	ft_putnbr(int nb)
{

	char	str[12];
	int	i;
	int	is_negative;

	i = 0;
	is_negative = 0;

	if (nb == 0)
	{
		ft_putchar('0');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (nb > 0)
	{
		str[i++] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (is_negative)
	{
		str[i++] = '-';
	}
	while (-- i >= 0)
	{
		ft_putchar(str[i]);
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		i++;
	}
	ft_putnbr(i);
}

int	main(void)
{
	char *str;
	str = "salutation";
	ft_strlen(str);
	return (0);
}
