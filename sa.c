#include "push_swap.h"
void		sa(t_data *data)
{
	int temp;

	temp = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = temp;
	printf("%s\n","sa");
}