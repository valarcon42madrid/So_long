/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:31:39 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:31:52 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	ft_read_map_file(char *fn, int *he, int *le, t_game_map **map)
{
	int		fd;
	int		last_state;
	size_t	nsi;

	*he = 0;
	*le = 0;
	fd = open(fn, O_RDONLY);
	if (fd < 0)
		return (0);
	(*map)->map_data = malloc(sizeof(char **) * 1);
	if (!((*map)->map_data))
		return (0);
	last_state = get_next_line(fd, &(*map)->map_data[*he]);
	while (last_state == 1)
	{
		*le = ft_strlen((*map)->map_data[*he]);
		(*he)++;
		nsi = sizeof(char **) * (*he + 1);
		(*map)->map_data = ft_realloc((void **) &(*map)->map_data, nsi);
		last_state = get_next_line(fd, &(*map)->map_data[*he]);
	}
	close(fd);
	return (1);
}

void	ft_free_map_data(char ***map_data, int size)
{
	int	count;

	count = 0;
	while (count <= size)
	{
		free((*map_data)[count]);
		count++;
	}
	free((*map_data));
	(*map_data) = NULL;
}

int	ft_get_map(int argc, char *argv[], t_game_map **game_map)
{
	char	**map_data;
	int		map_h;
	int		map_l;

	map_data = NULL;
	(*game_map) = malloc(sizeof(t_game_map));
	if (argc != 1 && (*game_map) && ft_check_filename(argv[1]))
	{
		if (!ft_read_map_file(argv[1], &map_h, &map_l, game_map))
		{
			free((*game_map));
			(*game_map) = NULL;
			return (0);
		}
		(*game_map)->map_height = map_h;
		(*game_map)->map_length = map_l;
		(*game_map)->max_score = ft_max_score((*game_map));
		if (ft_check_map_data(game_map))
			return (1);
		ft_free_map_data(&((*game_map)->map_data), map_h);
	}
	(*game_map)->map_data = NULL;
	free((*game_map));
	(*game_map) = NULL;
	return (0);
}
