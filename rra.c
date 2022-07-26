#include "push_swap.h"

int	*rra(t_data *data)
{
	int temp;
	int i;
	
	// i = data->size_array - 1;
	i = data->top_a; // 0 
	temp = data->stack_a[data->size_array - 1];
	// printf("Twmp %d \n ", temp);
	while (i < data->size_array - 1)
	{
		data->stack_a[i + 1] = data->stack_a[i];
		i++;
	}
	data->stack_a[data->top_a] = temp;
	printf("rra\n");
	return (data->stack_a);
}