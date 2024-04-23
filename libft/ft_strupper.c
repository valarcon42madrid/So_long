/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:25:17 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:25:19 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_toupper((int) str[i]) != (int) str[i])
			str[i] = (char) ft_toupper((int) str[i]);
		i++;
	}
	return (str);
}
