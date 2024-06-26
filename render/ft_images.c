/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_images.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:38:08 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:38:11 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_wall_image(t_render_v **vars, t_game_map **map)
{
	char		*wall;
	static void	*img;
	int			pos[2];

	wall = WALL;
	if (!img)
		img = mlx_xpm_file_to_image((*vars)->mlx, wall, &pos[0], &pos[1]);
	(*map)->wall = img;
}

void	ft_star_image(t_render_v **vars, t_game_map **map)
{
	char		*star;
	static void	*img;
	int			pos[2];

	star = STAR;
	if (!img)
		img = mlx_xpm_file_to_image((*vars)->mlx, star, &pos[0], &pos[1]);
	(*map)->star = img;
}

void	ft_exit_image(t_render_v **vars, t_game_map **map)
{
	char		*exit;
	static void	*img;
	int			pos[2];

	exit = EXIT;
	if (!img)
		img = mlx_xpm_file_to_image((*vars)->mlx, exit, &pos[0], &pos[1]);
	(*map)->exit = img;
}

void	ft_bg_image(t_render_v **vars, t_game_map **map)
{
	char		*bg;
	static void	*img;
	int			pos[2];

	bg = STONE;
	if (!img)
		img = mlx_xpm_file_to_image((*vars)->mlx, bg, &pos[0], &pos[1]);
	(*map)->bg = img;
}
