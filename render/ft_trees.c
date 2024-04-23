/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trees.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:39:21 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:39:22 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_tree1(t_render_v **vars, t_game_map **map)
{
	char		*tree;
	static void	*img;
	int			pos[2];

	tree = WALL;
	if (!img)
		img = mlx_xpm_file_to_image((*vars)->mlx, tree, &pos[0], &pos[1]);
	(*map)->wall = img;
}
