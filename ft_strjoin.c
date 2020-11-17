/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarei <tmarei@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 18:11:58 by tmarei            #+#    #+#             */
/*   Updated: 2020/11/17 19:49:14 by tmarei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1len;
	int		s2len;
	int		len;
	char	*temp;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	len = s1len + s2len;
	temp = (char *)malloc(len + 1);
	if (!temp)
		return (NULL);
	while (s1len--)
		*temp++ = *s1++;
	while (s2len--)
		*temp++ = *s2++;
	*temp = '\0';
	return (&temp[-len]);
}
