#include "push_swap.h"

void	sort_hundred(t_data *data)
{
	int range;
	int j;
	int count;

	range = data->size_array / 6;
	j = 0;
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
			}
			j++;
		}
		range += 2;
	}
    printf("this is top_b %d\n and this is size array%d\n",data->top_a,data->size_array);
	if (data->top_b < data->size_array)
	{
		count = data->size_array - data->top_b;
		while (count)
		{
			pb(data);
			count--;
		}	
	}
	// int b;
	// int bigest;
	// int index;

	// b = 0;
	// bigest = data->stack_b[b];
	// index = 0;
	// while (b < data->size_stack_b)
	// {
	// 	if (bigest < data->stack_b[b])
	// 	{
	// 		bigest = data->stack_b[b];
	// 		index = b;
	// 	}
	// 	b++;
	// }
	// sb(data);
	// printf("this is the top_b %d\n",data->size_array);
	// printf("this is top_b in stack_b %d\n",data->stack_b[data->top_b]);
	// pa(data);
}