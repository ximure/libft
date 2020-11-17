/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarei <tmarei@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:29:46 by tmarei            #+#    #+#             */
/*   Updated: 2020/11/15 21:09:28 by tmarei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tdest;
	unsigned char	*tsrc;

	tdest = (unsigned char *)dest;
	tsrc = (unsigned char *)src;
	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		tdest[i] = tsrc[i];
		if (tdest[i] == (unsigned char)c)
			return ((void *)&tdest[++i]);
		i++;
	}
	return (NULL);
}
