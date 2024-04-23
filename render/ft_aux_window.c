/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_window.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:35:54 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:36:04 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_window_height(t_game_map *game_map)
{
	return (((game_map->map_height) + 1) * TILE_WIDTH);
}

int	ft_window_width(t_game_map *game_map)
{
	return ((game_map->map_length) * TILE_WIDTH);
}

int	ft_whc(t_game_map *game_map)
{
	return ((((game_map->map_height) + 1) * TILE_WIDTH) / 2);
}

int	ft_wwc(t_game_map *game_map)
{
	return (((game_map->map_length) * TILE_WIDTH) / 2);
}
