/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:23:18 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:23:19 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	l;

	if (dst == 0 || src == 0)
		return (0);
	l = 0;
	c = 0;
	while (src[l] != '\0')
		l++;
	while (src[c] && c < (dstsize - 1))
	{
		if (dstsize == 0)
			return (l);
		dst[c] = src[c];
		c++;
	}
	if (dstsize != 0)
		dst[(c)] = '\0';
	return (l);
}
