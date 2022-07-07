#include "push_swap.h"

int	*arr_int(char **sp,t_data *data)
{
	int	i;
	int	*j;
	int m;

	m = 0;
	i = 0;
	j = 0;
	while (sp[i])
	{
		data->size_array++;
		i++;
	}
	j = malloc(i * sizeof(int) + 1);
	data->stack_b = malloc(i * sizeof(int) + 1);
	if (!j)
		return (NULL);
	while (sp[m])
	{
		j[m] = ft_atoi(sp[m]);
		m++;
	}
	return (j);
}