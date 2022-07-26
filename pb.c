#include "push_swap.h"

void	pb(t_data *data)
{
	if (data->top_a >= 0)
	{
		data->stack_b[data->top_b + 1] = data->stack_a[data->top_a];
		data->top_a +=1;
		data->top_b +=1;
	}
	write(1,"pb\n",3);
}