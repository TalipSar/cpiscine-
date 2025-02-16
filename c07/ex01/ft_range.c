#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	if(min >= max)
	{
		array = NULL;
		return (array);
	}
	if (!(array = malloc(sizeof(int) * max - min)))
	{
		return (NULL);
	}
	while (max > min)
	{
		array[max - min - 1] = max - 1;
		max--;
	}
	return (array);
}/*
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
	    free(range);
    }
    else
    {
        printf("Erreur d'allocation ou intervalle incorrect.\n");
    }
    return 0;
}
*/
