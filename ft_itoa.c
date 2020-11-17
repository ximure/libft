/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarei <tmarei@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:16:08 by tmarei            #+#    #+#             */
/*   Updated: 2020/11/15 17:58:38 by tmarei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len(int n)
{
	size_t			len;
	long long int	num1;

	num1 = n;
	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		num1 *= -1;
		len++;
	}
	while (num1 > 0)
	{
		num1 = num1 / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;

	if (!(num = (char *)malloc(ft_len(n + 1) * sizeof(char *))))
		return (NULL);
	if (n >= 0 && num)
	{
		*--num = '0' + (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--num = '0' + (n % 10);
			n /= 10;
		}
	}
	else if (num)
	{
		*--num = '0' - (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--num = '0' - (n % 10);
			n /= 10;
		}
		*--num = '-';
	}
	return (ft_strdup(num));
}
