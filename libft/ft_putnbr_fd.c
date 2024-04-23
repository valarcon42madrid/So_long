/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:20:46 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:20:47 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd);

int	ft_check_biggest(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return (n);
	}
	if (n == 2147483647)
	{
		ft_putstr_fd("2147483647", fd);
		return (n);
	}
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	t;
	char			c;

	t = 0;
	c = n + 48;
	if (!ft_check_biggest(n, fd))
	{
		if (n < 0)
		{
			ft_putstr_fd("-", fd);
			n = -n;
		}
		if (n > 9)
		{
			t = n % 10;
			n /= 10;
			c = t + 48;
			ft_putnbr_fd(n, fd);
		}
		else
		{
			c = n + 48;
		}
		write(fd, &c, 1);
	}
}
