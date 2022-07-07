#include "push_swap.h"

int	*rra(t_data *data)
{
	int temp;
	int i;
	
	i = data->size_array - 1;
	temp = data->stack_a[data->size_array - 1];
	while (i > 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[0] = temp;
	printf("rra\n");
	return (data->stack_a);
}