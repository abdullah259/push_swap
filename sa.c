#include "push_swap.h"
void		sa(t_data *data)
{
	int temp;

	// for(int i = 0; i < 4; i++)
	// {
	// 	printf("%d\n", data->stack_a[i]);
	// }
	// 	printf("%d\n", data->top_a);
	temp = data->stack_a[data->top_a];
	data->stack_a[data->top_a] = data->stack_a[data->top_a + 1];
	data->stack_a[data->top_a + 1] = temp;
	printf("%s\n","sa");
}