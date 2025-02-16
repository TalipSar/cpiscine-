//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb != 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
int	main(void)
{
	int a = ft_iterative_factorial(5);
	printf("%d", a);
}
*/
