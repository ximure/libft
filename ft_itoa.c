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

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_len(int nbr)
{
	int	count;

	count = 0;
	//printf("nbr (ft_len) = %d\n", nbr);
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
	printf("count (ft_len) = %d\n", count);
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*temp;

	i = ft_len(n);
	printf("count (ft_itoa) = %d\n", i);
	if (n == -2147483648)
	{
		temp = "-2147483648";
		//return (ft_strdup(temp));
		return (temp);
	}
	if (!(temp = malloc((i + 1) * sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		temp[0] = '-';
		n *= -1;
	}
	while (--i)
	{
		temp[i] = (n % 10) + '0';
		n /= 10;
	}
	//return (ft_strdup(temp));
	return (temp);
}

int		main()
{
	printf("(-2147483647) = %s\n", ft_itoa(-2147483647));
	printf("(2147483647) = %s\n", ft_itoa(2147483647));
	printf("(0) = %s\n", ft_itoa(0));
}
