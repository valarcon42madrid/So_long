/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:22:43 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:22:44 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (1)
	{
		dest[i] = src[i];
		if (dest[i] == '\0')
			return (dest);
		i++;
	}
}

char	*ft_strdup(const char *s1)
{
	char	*dest;

	dest = malloc(ft_strlen((char *)s1) + 1);
	if (dest != 0)
	{
		ft_strcpy((char *) dest, (char *) s1);
		return (dest);
	}
	return (0);
}
