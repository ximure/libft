/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarei <tmarei@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 17:22:36 by tmarei            #+#    #+#             */
/*   Updated: 2020/11/13 18:19:22 by tmarei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*temp;

	if (!s)
		return (NULL);
	temp = (char *)malloc(len + 1);
	if ((int)start >= ft_strlen((char *)s))
	{
		*temp = '\0';
		return (temp);
	}
	i = 0;
	if (temp == NULL)
		return (NULL);
	while (len--)
	{
		temp[i] = s[start];
		i++;
		start++;
	}
	temp[i] = '\0';
	return (temp);
}
