#include "libft.h"

int		len_num(int n)
{
	int			len;
	long int	tmp;

	tmp = n;
	len = 1;
	if (tmp < 0)
	{
		len++;
		tmp *= -1;
	}
	while (tmp >= 10)
	{
		tmp /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*ret;
	int			size;
	int			i;
	long int	tmp;

	tmp = n;
	size = len_num(n);
	if (!(ret = malloc(sizeof(char) * size + 1)))
		return (0);
	ret[0] = '0';
	if (n < 0)
	{
		ret[0] = '-';
		tmp *= -1;
	}
	ret[size] = '\0';
	i = size - 1;
	while (tmp > 0)
	{
		ret[i] = (tmp % 10) + 48;
		tmp /= 10;
		i--;
	}
	return (ret);
}