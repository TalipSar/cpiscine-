#include <stdlib.h>
#include <stdio.h>

int	*ft_ultimate_range(int, **range, int min, int max)
{
	int	*array;
	if(min >= max)
	{
		array = NULL;
		range = NULL;
		return (0);
	}
	array = malloc(sizeof(int) * max - min);
	if (array == NULL)
	{
		return (NULL);
	}
	while (max > min)
	{
		array[max - min - 1] = max - 1;
		max--;
		range++;
	}
	if (range == null)
	{
		printf("Erreur.\n");
	}
	return (range);
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
