/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunlong.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:21:31 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:21:33 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_biggest_unsigned(unsigned long n, int fd)
{
	if (n == 18446744073709551615lu)
	{
		ft_putstr_fd("18446744073709551615", fd);
		return (1);
	}
	return (0);
}

void	ft_putunlong(unsigned long n, int fd)
{
	unsigned long	t;
	char			c;

	t = 0;
	c = n + 48;
	if (!ft_check_biggest_unsigned(n, fd))
	{
		if (n > 9)
		{
			t = n % 10;
			n /= 10;
			c = t + 48;
			ft_putunlong(n, fd);
		}
		else
		{
			c = n + 48;
		}
		write(fd, &c, 1);
	}
}
