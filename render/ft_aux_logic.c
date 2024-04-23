/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_logic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:35:21 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:35:31 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_game_end(t_game_map *game_map)
{
	return (game_map->max_score == game_map->game_score);
}

int	ft_max_score(t_game_map *game_map)
{
	int	score;
	int	count_y;
	int	count_x;

	score = 0;
	count_y = 0;
	count_x = 0;
	while (count_y <= game_map->map_height)
	{
		count_x = 0;
		while (game_map->map_data[count_y][count_x])
		{
			if (game_map->map_data[count_y][count_x] == 'C')
				score++;
			count_x++;
		}
		count_y++;
	}
	return (score);
}
