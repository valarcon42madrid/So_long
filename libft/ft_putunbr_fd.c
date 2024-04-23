/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:21:17 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:21:19 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd);

static int	ft_check_biggest_unsigned(unsigned int n, int fd)
{
	if (n == 4294967295)
	{
		ft_putstr_fd("4294967295", fd);
		return (1);
	}
	return (0);
}

void	ft_putunbr_fd(unsigned int n, int fd)
{
	unsigned int	t;
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
			ft_putunbr_fd(n, fd);
		}
		else
		{
			c = n + 48;
		}
		write(fd, &c, 1);
	}
}
