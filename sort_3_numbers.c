#include "push_swap.h"

void	sort_three(t_data *data)
{
	if (data->stack_a[0] > data->stack_a[1] && data->stack_a[1] < data->stack_a[2]
		&& data->stack_a[0] < data->stack_a[2])
	{
		sa(data);
	}
	else if (data->stack_a[0] > data->stack_a[1] && data->stack_a[1] > data->stack_a[2]
			&& data->stack_a[0] > data->stack_a[2])
	{
		sa(data);
		rra(data);
	}
	else if (data->stack_a[0] > data->stack_a[1] && data->stack_a[1] < data->stack_a[2]
			&& data->stack_a[0] > data->stack_a[2])
	{
		ra(data);
	}
	else if (data->stack_a[0] < data->stack_a[1] && data->stack_a[1] > data->stack_a[2]
			&&
			data->stack_a[0] < data->stack_a[2])
	{
		sa(data);
		ra(data);
	}
	else if (data->stack_a[0] < data->stack_a[1] && data->stack_a[1] > data->stack_a[2] 
			&& data->stack_a[0] > data->stack_a[2])
	{
		rra(data);
	}
	else
		printf("sorted");
}