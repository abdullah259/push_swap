#include "push_swap.h"

int	get_smallest(t_data *data)
{
	int i;
	int lowstind;
	int lowest;

	i = 0;
	lowstind = i;
	lowest = data->stack_a[i];
	while (i < data->size_array)
	{
		if (data->stack_a[i] < lowest)
		{
			lowest = data->stack_a[i];
			lowstind = i;
		}
		i++;
	}
    // printf("inside %d\n",lowstind);
	return (lowstind);
}

void	sort_four(t_data *data)
{
	int index;
	
	index = get_smallest(data);
	// printf("Order 0 : %d\n", data->order_array[0]);
	// printf("stack a : %d\n", data->stack_a[0]);
	// printf("top a : %d\n", data->top_a);
	// printf("Before RRA \n");
	// for(int i = data->top_a; i < 4; i++)
	// {
	// 	printf(" %d", data->stack_a[i]);
	// }
    // printf("\n");
    // printf("it is index %d\n",index
	while (data->stack_a[data->top_a] != data->order_array[0])
	{
	    // index = get_smallest(data); // 3
		if (index <= data->size_array / 2)
			ra(data);
		else
			rra(data);
	}
	// printf("After RRA \n");
	// for(int i = data->top_a; i < 4; i++)
	// {
	// 	printf(" %d", data->stack_a[i]);
	// }
    // printf("\n");
	pb(data);
    // printf("top a : %d\n", data->top_a);
	// for(int i = data->top_a; i < 4; i++)
	// {
	// 	printf(" %d", data->stack_a[i]);
	// }
    // printf("\n");
	sort_three4(data);
	// for(int i = data->top_a; i < 4; i++)
	// {
	// 	printf(" %d", data->stack_a[i]);
	// }
    // printf("\n");
	pa(data);
	// rra(data);
}
