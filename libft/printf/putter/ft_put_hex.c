/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:27:06 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:27:08 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_put_hex(unsigned long long p, int u)
{
	if (p == 0)
		return (ft_putstr("0"));
	if (u == 1)
		return (ft_dec_to_hex(p, 0, 1));
	return (ft_dec_to_hex(p, 1, 1));
}
