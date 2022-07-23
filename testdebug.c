# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>


// int		ft_atoi(char *str)
// {
// 	int		i;
// 	int		pon;
// 	unsigned int	num;

// 	num = 0;
// 	i = 0;
// 	pon = 1;
// 	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
// 		i++;
// 	if (str[i] == 39)
// 		i++;
// 	if (str[i] == '-' || str[i] == '+')
// 		pon *= 1 - 2 * (str[i++] == '-');
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		num = num * 10 + (str[i] - 48);
// 		i++;
// 	}
// 	if (num > 2147483648 && pon == -1)
// 		return (0);
// 	else if (num > 2147483647 && pon == 1)
// 		return (-1);
// 	return ((int)(pon * num));
// }
// size_t	ft_strlcpy(char *det, const char *src, size_t size)
// {
// 	size_t i;

// 	i = 0;
// 	while (i + 1 < size && src[i])
// 	{
// 		det[i] = src[i];
// 		i++;
// 	}
// 	if (size >= 1)
// 	{
// 		det[i] = '\0';
// 	}
// 	while (src[i])
// 	{
// 		i++;
// 	}
// 	return(i);
// }
int main()
{
	int i;
	int j;

	i = 5;
	j = i;
	j = 9;
	printf("this i %d\n and this is j %d\n",i,j);
}