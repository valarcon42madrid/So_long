/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:23:06 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:23:07 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	t;
	size_t	j;
	size_t	i;
	size_t	s;

	t = ft_strlen((const char *)dst);
	j = t;
	i = 0;
	s = ft_strlen(src);
	while ((t < dstsize) && (src[i] != '\0') && (j < dstsize - 1))
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	if (dstsize != 0 && (t < dstsize))
		dst[j] = '\0';
	if (t > dstsize)
		return (dstsize + s);
	return (t + s);
}
