#include <stdlib.h>
#include <stdio.h>

int	*ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	if(min >= max)
	{
		*range = NULL;
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min));
	if (array == NULL)
	{
		*range = NULL;
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	*range = array;
	return (array);
}
int main(void)
{
	int lol;
	int min = 2;
	int max = 5;
	int range;
	int i;
	lol = ft_ultimate_range(*range, min, max);
    printf("%d", lol);
}
