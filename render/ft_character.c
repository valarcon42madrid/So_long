/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_character.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:37:12 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:37:14 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_marvin_img(t_render_v **vars, t_game_map **map)
{
	char		*marvin;
	static void	*img;
	int			pos[2];

	marvin = "./assets/a.xpm";
	if (!img)
		img = mlx_xpm_file_to_image((*vars)->mlx, marvin, &pos[0], &pos[1]);
	(*map)->marvin = img;
}
