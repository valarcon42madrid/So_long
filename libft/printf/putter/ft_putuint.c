/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:27:50 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:27:52 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static int	ft_numberlength(unsigned int n)
{
	unsigned int	o;
	unsigned int	l;

	o = n;
	l = 0;
	if (n < 0)
		o = -o;
	while (o > 0)
	{
		o /= 10;
		l++;
	}
	return (l);
}

int	ft_putuint(unsigned int n)
{
	ft_putunbr_fd(n, 1);
	if (n == 0)
		return (1);
	return (ft_numberlength(n));
}
