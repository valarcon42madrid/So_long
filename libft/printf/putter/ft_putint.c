/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:27:26 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:27:28 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static int	ft_numberlength(int n)
{
	unsigned int	o;
	int				l;

	l = 0;
	if (n < 0)
	{
		o = -n;
	}
	else
	{
		o = n;
	}
	while (o > 0)
	{
		o /= 10;
		l++;
	}
	return (l);
}

int	ft_putint(int n)
{
	ft_putnbr_fd(n, 1);
	if (n == 0)
		return (1);
	if (n < 0)
		return (ft_numberlength(n) + 1);
	return (ft_numberlength(n));
}
