/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarei <tmarei@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:51:46 by tmarei            #+#    #+#             */
/*   Updated: 2020/11/15 17:15:25 by tmarei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*tsrc;
	unsigned char		*tdest;

	tsrc = src;
	tdest = dest;
	if (tdest < tsrc)
	{
		i = 0;
		while (i < n)
		{
			tdest[i] = tsrc[i];
			i++;
		}
	}
	else if (tdest > tsrc)
	{
		i = n;
		while (i > 0)
		{
			tdest[i - 1] = tsrc[i - 1];
			i--;
		}
	}
	return (dest);
}
