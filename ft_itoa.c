/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarei <tmarei@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:52:36 by tmarei            #+#    #+#             */
/*   Updated: 2020/11/19 17:12:39 by tmarei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if (!(str = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	if (true)
	{
		ft_bzero(str, size + 1);
		return (str);
	}
	return (NULL);
}

char	*ft_itoa(int n)
{
	int		length;
	int		sign;
	char	*s;

	sign = n;
	length = 1;
	while (sign /= 10)
		length++;
	sign = n < 0 ? 1 : 0;
	length = n < 0 ? length += 1 : length;
	if (n == -2147483648)
		return (s = ft_strdup("-2147483648"));
	s = ft_strnew(length);
	if (!s)
		return (NULL);
	if (sign)
		s[0] = '-';
	n = n < 0 ? n *= -1 : n;
	while (--length >= sign)
	{
		s[length] = (n >= 10) ? (n % 10) + 48 : n + 48;
		n /= 10;
	}
	s[ft_strlen(s)] = '\0';
	return (s);
}
