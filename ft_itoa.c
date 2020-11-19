/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarei <tmarei@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:22:46 by tmarei            #+#    #+#             */
/*   Updated: 2020/11/19 15:02:40 by ximure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
	{
		count = 1;
		return (count);
	}
	if (nbr < 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*temp;
	char	*digits;

	len = ft_len(n);
	if (n == -2147483648)
		return (temp = ft_strdup("-2147483648"));
	if (!(temp = malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		temp[0] = '-';
		n = -n;
		digits = temp + 1;
		i = len - 1;
	}
	else
	{
		digits = temp;
		i = len;
	}
	while (1)
	{
		--i;
		digits[i] = (n % 10) + '0';
		n /= 10;
		if (!i)
			break ;
	}
	return (ft_strdup(temp));
}
