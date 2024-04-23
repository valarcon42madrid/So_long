/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:14:10 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:14:12 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dec_to_hex(unsigned long long n, int lower, int reset)
{
	unsigned long long	o;
	char				r;
	static int			length = 0;

	o = 0;
	if (reset)
		length = 0;
	if (n == 0)
		return (length);
	o = n % 16;
	ft_dec_to_hex((n / 16), lower, 0);
	if (o > 9)
		r = 'A' + (o - 10);
	else
		r = (o + 48);
	if (lower == 1)
		r = ft_tolower(r);
	length++;
	write(1, &r, 1);
	return (length);
}
