/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:18:42 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:18:43 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*g;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *) s;
	while (n > i)
	{
		if ((d[i] != (unsigned char)c))
			i++;
		else
		{
			g = (unsigned char *) &s[i];
			return (g);
		}
	}
	return (0);
}
