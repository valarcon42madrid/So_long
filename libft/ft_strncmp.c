/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:24:04 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:24:05 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				f;

	i = 0;
	f = 0;
	while (f == 0 && (i < n) && (n != 0))
	{
		if ((unsigned char) s1[i] == '\0'
			&& (unsigned char) s2[i] == '\0')
			return (f);
		if ((unsigned char) s1[i] > (unsigned char) s2[i])
			f = 1;
		else if ((unsigned char) s1[i] < (unsigned char) s2[i])
			f = -1;
		i++;
	}
	return (f);
}
