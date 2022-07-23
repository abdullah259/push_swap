#include "push_swap.h"

int	get_smallest(t_data *data)
{
	int i;
	int lowstind;
	int lowest;

	i = 0;
	lowstind = i;
	lowest = data->stack_a[i];
	while (i <= data->top_a - 1)
	{
		if (data->stack_a[i] < lowest)
		{
			lowest = data->stack_a[i];
			lowstind = i;
		}
		i++;
	}
	return (lowstind);
}

void	sort_four(t_data *data)
{
	int index;
	// int i;

	// i = data->top_a;
	index = get_smallest(data);
	while (data->stack_a[data->top_a] != data->order_array[0])
	{
		if (index < data->top_a / 2)
			ra(data);
		else
			rra(data);
		data->top_a--;
	}
	printf("inside %d\n",index);
}