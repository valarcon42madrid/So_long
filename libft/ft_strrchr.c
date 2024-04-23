/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:24:48 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:24:50 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*g;
	int		t;

	i = 0;
	t = 0;
	while (s[t] != '\0')
		t++;
	while (t != -1)
	{
		if ((s[t] != c))
			t--;
		else
		{
			g = (char *) &s[t];
			return (g);
		}
	}
	return (0);
}
