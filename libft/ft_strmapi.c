/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:23:50 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:23:52 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*j;
	int		i;	

	i = 0;
	if (!s || !f)
		return (0);
	j = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!j)
		return (0);
	while (s[i] != '\0')
	{
		j[i] = f(i, s[i]);
		i++;
	}
	j[i] = '\0';
	return (j);
}
