#include "push_swap.h"

void	sort_hundred(t_data *data)
{
	int range;
	int j;
	int count;
	int isthbal1;

	range = data->size_array / 6;
	j = 0;
	count = data->size_array;
	isthbal1 = range;
	printf("this is range %d\n",range);
	while (range <= data->size_array)
	{
		j = data->top_a;
		while (j < data->size_array)
		{
			if (data->stack_a[j] <= data->order_array[range])
			{
				int temp = data->stack_a[j];
				while (temp != data->stack_a[data->top_a])
				{
					if (j <= data->size_array / 2)
						ra(data);
					else
						rra(data);
				}
				pb(data);
				count--;
			}
			j++;
		}
		range += isthbal1;
	}
    // printf("this is top_b %d\n and this is size array %d\n",data->top_a,data->size_array);
	// while (data->top_b < d)
	// {
	// 	pb(data);
	// 	count--;
	// }
    printf("this is isthbal %d\n",isthbal1);
		// count = data->size_array - data->top_b;
	// if (data->top_b < data->size_array)
	// {
	// 	while (count)
	// 	{
	// 		pb(data);
	// 		count--;
	// 	}	
	// }
	int b;
	int bigest;
	int index;

	b = 0;
	bigest = data->stack_b[b];
	index = 0;
	while (b < data->size_stack_b)
	{
		if (bigest < data->stack_b[b])
		{
			bigest = data->stack_b[b];
			index = b;
		}
		b++;
	}
	sb(data);
	// printf("this is the top_b %d\n",data->size_array);
	// printf("this is top_b in stack_b %d\n",data->stack_b[data->top_b]);
	pa(data);
}