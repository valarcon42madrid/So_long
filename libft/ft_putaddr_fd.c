/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:20:02 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:20:04 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putaddr_fd(void *p)
{
	int		l;

	l = 0;
	if (!p)
		return (ft_putstr("0x0"));
	l += ft_putstr("0x");
	l += ft_dec_to_hex((unsigned long long) p, 1, 1);
	return (l);
}
