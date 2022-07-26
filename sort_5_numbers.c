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
	
	index = get_smallest(data);
	printf("Order 0 : %d\n", data->order_array[0]);
	printf("stack a : %d\n", data->stack_a[0]);
	printf("top a : %d\n", data->top_a);
	// while (data->stack_a[data->top_a] != data->order_array[0])
	// {
	// 	if (index <= data->top_a / 2)
	// 		rra(data);
	// 	else
			ra(data);
			ra(data);
	// }

	pb(data);
	sort_three4(data);
	for(int i = 0; i < 4; i++)
	{
		printf("%d\n", data->stack_a[i]);
	}
	pa(data);
	// rra(data);
}
