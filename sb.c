#include "push_swap.h"

void	sb(t_data *data)
{
	int temp;

	temp = data->stack_b[data->top_b - 1]; // 1000
	// printf("this is temp inside %d\n",temp);
	// printf("this is  top_b %d\n",data->stack_b[data->top_b - 2]);
	data->stack_b[data->top_b - 1] = data->stack_b[data->top_b - 2];
	data->stack_b[data->top_b - 2] = temp;
	write(1, "sb\n", 3);
}