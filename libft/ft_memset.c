/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:19:42 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:19:44 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	lenc;
	unsigned char	d;
	unsigned char	*t;

	lenc = 0;
	lenc = 0;
	d = (unsigned char)c;
	t = (unsigned char *)b;
	while (len > lenc)
	{
		t[lenc] = d;
		lenc++;
	}
	return (b);
}
