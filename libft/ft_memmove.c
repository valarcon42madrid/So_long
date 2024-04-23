/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:19:29 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:19:31 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	e;

	e = 0;
	if (dst == 0 && src == 0)
		return (NULL);
	if (dst > src)
	{
		while (len > e)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		while (e < len)
		{
			((char *)dst)[e] = ((char *)src)[e];
			e++;
		}
	}
	return (dst);
}
