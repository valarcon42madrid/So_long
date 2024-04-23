/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_img.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:38:41 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:38:42 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_put_img(t_render_v **vars, void *p, int x, int y)
{
	if ((*vars) && p)
		mlx_put_image_to_window((*vars)->mlx, (*vars)->win, p, x, y);
}
