/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:18:55 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:18:57 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	int				f;
	unsigned char	*t1;
	unsigned char	*t2;

	i = 0;
	f = 0;
	t1 = (unsigned char *) s1;
	t2 = (unsigned char *) s2;
	while (f == 0 && (i < n) && (n != 0))
	{
		if (t1[i] > t2[i])
			f = t1[i] - t2[i];
		else if (t1[i] < t2[i])
			f = t1[i] - t2[i];
		i++;
	}
	return (f);
}
