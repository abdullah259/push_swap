#include "push_swap.h"

int	*ra(t_data *data)
{
	int i;
	int temp;

	temp = data->stack_a[0];
	i = 0;
	while (i < data->size_array)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[data->size_array - 1] = temp;
	write(1,"ra\n",3);
	return (data->stack_a);
}