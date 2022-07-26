#include "push_swap.h"

int	*rra(t_data *data)
{
	int temp;
	int i;
	
	// i = data->size_array - 1;
	i = data->size_array - 1; // 0 
	temp = data->stack_a[i];
	// printf("Twmp %d \n ", temp);
	while (i > data->top_a)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[data->top_a] = temp;
	printf("rra\n");
	return (data->stack_a);
}

/*
1
2
3
4

RRA

4
1
2
3

*/