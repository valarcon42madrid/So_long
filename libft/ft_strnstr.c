/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:24:16 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:24:17 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	l;

	h = 0;
	l = ft_strlen(needle);
	if (l == 0 || len == 0)
		return ((char *)(&haystack[0]));
	while (haystack[h])
	{
		if (ft_strncmp(&haystack[h], needle, ft_strlen(needle)) == 0)
		{
			if ((ft_strlen(needle) + h) > len)
				return ((void *)0);
			return ((char *)(&haystack[h]));
		}
		h++;
	}
	return ((void *)0);
}
