/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarei <tmarei@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:22:46 by tmarei            #+#    #+#             */
/*   Updated: 2020/11/18 17:12:25 by tmarei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(int s)
{
	int i;
	while (s)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char *str;

	if (!(str = malloc(ft_len(n) * sizeof(char))))
		return (NULL);
	if (n >= 0 && str)
	{
		*--str = 48 + (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--str = 48 + (n % 10);
			n /= 10;
		}
	}
	else if (str)
	{
		*--str = 48 - (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--str = 48 - (n % 10);
			n /= 10;
		}
		*--str = '-';
	}
	return (ft_strdup(str));
}
