/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarei <tmarei@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:57:56 by tmarei            #+#    #+#             */
/*   Updated: 2020/11/17 19:57:57 by tmarei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;

	if (!s1)
		return (NULL);
	i = 0;
	end = ft_strlen(s1) - 1;
	while (s1[i] != '\0')
	{
		if (ft_set(s1[i], set) != 1)
			break ;
		i++;
	}
	while (end >= 0)
	{
		if (ft_set(s1[end], set) != 1)
			break ;
		end--;
	}
	if (end < i)
		return ("");
	return (ft_substr(s1, i, (end - i + 1)));
}
