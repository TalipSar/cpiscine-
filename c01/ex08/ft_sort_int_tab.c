
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

void	ft_sort_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		i++;	
	}
}

int	main(void)
{
	int numbers[] = {25, 50, 75, 100};
	ft_sort_int_tab(numbers, 4);
}
