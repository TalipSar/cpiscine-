#include <unistd.h>

void	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while(i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}
