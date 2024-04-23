/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_player.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:37:24 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:37:38 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static t_game_map	*ft_check_tile(t_game_map *game_map)
{
	int	x;
	int	y;

	y = game_map->player_position_y / TILE_WIDTH;
	x = game_map->player_position_x / TILE_WIDTH;
	if (game_map->map_data[y][x] == 'C')
	{
		game_map->map_data[y][x] = '0';
		game_map->game_score++;
	}
	return (game_map);
}

t_game_map	*ft_control_player(int keycode, t_game_map *inj_game_map)
{
	static t_game_map	*game_map;
	static int			game_end = 0;

	if (game_map && (game_end == 0))
	{
		game_map = ft_keycode_action(game_map, keycode);
		game_map = ft_check_tile(game_map);
	}
	else if (inj_game_map && (game_end == 0))
	{
		game_map = inj_game_map;
		if (inj_game_map->game_over)
			game_end = 1;
		else
			ft_find_player(game_map, &game_map->player_position_x,
				&game_map->player_position_y);
	}
	return (game_map);
}
