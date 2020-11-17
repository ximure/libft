/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarei <tmarei@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 20:01:55 by tmarei            #+#    #+#             */
/*   Updated: 2020/11/15 16:10:14 by tmarei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;
	char	*a;

	a = (char *)s1;
	i = 0;
	if (!(len = ft_strlen(s2)))
		return (a);
	while (i < n)
	{
		if (ft_strncmp(&s1[i], (char *)s2, ft_strlen(s2)) == 0)
		{
			if (i + ft_strlen(s2) > (unsigned long)n)
				return (NULL);
			return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
