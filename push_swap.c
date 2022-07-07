#include "push_swap.h"

void	check_after_num(char c, char c1, char c2)
{
	if ((c == '-' || c == '+') && (c1 >= '0' && c1 <= '9') &&
		(c2 == '-' || c2 == '+'))
	{
		printf("you have not number bacuse there is not exist number before - or + then number\n");
		exit(1);
	}
	if ((c == '-' || c == '+') && (c1 == '\0'|| c1 == ' ' || c1 == '\t'))
	{
		printf("ther is single char no numbers\n");
		exit(1);
	}
	if (c1 == '-' || c1 == '+')
	{
		printf("there is muluplie char\n");
		exit(1);
	}
}

void	check_alpha(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			// if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			// {
			// 	printf("error\n");
			// 	exit(1);
			// }
			if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') || (argv[i][j] >= 'A' && argv[i][j] <= 'Z'))
			{
				printf("error\n");
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	check_valid(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '-' || argv[i][j] == '+')
			{
				check_after_num(argv[i][j], argv[i][j + 1], argv[i][j + 2]);
			}
			j++;
		}
		i++;
	}
}

int main(int arc, char **argv)
{
	int i;
	char *join;
	char **sp;
	int m;
	int n;
	t_data data;

	data.size_array = 0;
	i = 1;
	if (arc < 2)
	{
		write(1,"Error\n",6);
		exit(1);
	}
	if (arc > 1)
	{
		if (argv[i][0] == '\0')
		{
			ft_putendl_fd("empty string", 2);
			exit(1);
		}
		check_alpha(argv);
		check_valid(argv);
		join = ft_join_arg(argv);
		sp = ft_split(join,' ');
		data.stack_a = arr_int(sp,&data);
		data.top_a = data.size_array - 1;
		data.top_b = -1;
		if (data.size_array == 3)
		{
			sort_three(&data);
		}
		m = 0;
		n = 0;
		while (n < data.size_array)
		{
			printf("%d\n",data.stack_a[m]);
			m++;
			n++;
		}
	}
}