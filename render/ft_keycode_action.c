/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keycode_action.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:38:22 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:38:29 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_print_step(t_game_map *map)
{
	if ((!map->game_over))
		ft_printf("%d\n", map->steps);
}

static int	ft_check_vw(t_game_map *game_map, int x, int y)
{
	int	line;
	int	count;

	line = 0;
	count = 0;
	if (game_map->map_data[y / TILE_WIDTH][x / TILE_WIDTH] == '1')
		return (0);
	return (1);
}

static t_game_map	*ft_move_vertical(t_game_map *game_map, int dir)
{
	int	x;
	int	y;

	x = game_map->player_position_x;
	y = game_map->player_position_y;
	if (ft_check_vw(game_map, x, y + (TILE_WIDTH * dir)))
	{
		game_map->player_position_y += dir * TILE_WIDTH;
		game_map->steps++;
		ft_print_step(game_map);
	}
	return (game_map);
}

static t_game_map	*ft_move_horizontal(t_game_map *game_map, int dir)
{
	int	x;
	int	y;

	x = game_map->player_position_x;
	y = game_map->player_position_y;
	if (ft_check_vw(game_map, x + (TILE_WIDTH * dir), y))
	{
		game_map->player_position_x += dir * TILE_WIDTH;
		game_map->steps++;
		ft_print_step(game_map);
	}
	return (game_map);
}

t_game_map	*ft_keycode_action(t_game_map *game_map, int keycode)
{
	if (keycode == 1)
		return (ft_move_vertical(game_map, 1));
	if (keycode == 13)
		return (ft_move_vertical(game_map, -1));
	if (keycode == 2)
		return (ft_move_horizontal(game_map, 1));
	if (keycode == 0)
		return (ft_move_horizontal(game_map, -1));
	return (game_map);
}
