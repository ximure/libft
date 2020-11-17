/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarei <tmarei@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:52:33 by tmarei            #+#    #+#             */
/*   Updated: 2020/11/13 17:29:19 by tmarei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen((char *)s);
	if (c == '\0')
		return (ft_strchr(s, '\0'));
	while (s[i] != c && i >= 0)
		--i;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
