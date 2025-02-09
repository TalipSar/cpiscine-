#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
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
/*
int	main(void)
{
	int i = 0;
	ft_putnbr(i);
	ft_putnbr(6);
	ft_putnbr(-156);

}*/
