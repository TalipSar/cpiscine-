#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;
	if(min >= max)
	{
		return (0);
	}
	array = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max )
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
/*
int main(void)
{
    int *range;
    int min = 2;
    int max = 5;
    int i;

    range = ft_range(min, max);
    if (range != NULL)
    {
	    i = 0;
	    while (i < (max - min))
	    {
           	 printf("%d ", range[i]);
		 i++;
	    }
	    printf("\n");
    }
    else
    {
        printf("Erreur d'allocation ou intervalle incorrect.\n");
    }
    return 0;
}
*/
