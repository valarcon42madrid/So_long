/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:42:35 by valarcon          #+#    #+#             */
/*   Updated: 2022/05/09 10:52:54 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include "libft/libft.h"

# define TILE_WIDTH 80

# define WALL "./assets/e.xpm"
# define STAR "./assets/d.xpm"
# define STONE "./assets/b.xpm"
# define EXIT "./assets/f.xpm"

# define ERR_MSG "The provided map is invalid!"

# define GAME_LOST "Game over"
# define GAME_WON "You won!"

# define ORANGE 0xFE6500

typedef struct s_game_map
{
	int		map_height;
	int		map_length;
	int		player_position_x;
	int		player_position_y;
	int		game_score;
	int		max_score;
	char	**map_data;
	int		game_over;
	int		steps;
	void	*wall;
	void	*exit;
	void	*player;
	void	*bg;
	void	*star;
	void	*marvin;
	int		drawp;
	char	*err_msg;
}	t_game_map;

typedef struct s_render_v {
	void	*mlx;
	void	*win;
}	t_render_v;

int			ft_get_map(int argc, char *argv[], t_game_map **game_map);
int			ft_check_map_data(t_game_map **game_map);

int			ft_check_is_wall(char *wall);
char		*ft_singlelinechr(char *line, char c);
int			ft_check_filename(char *file_name);
void		ft_find_player(t_game_map *game_map, int *x, int *y);

int			ft_aux_check_map_file(t_game_map *t_game_map);

t_render_v	*ft_start_render(t_game_map *game_map);

t_game_map	*ft_control_player(int keycode, t_game_map *inj_game_map);

t_game_map	*ft_keycode_action(t_game_map *game_map, int keycode);

void		ft_render_basic(t_game_map *game_map, t_render_v **vars);
void		ft_set_startv_render(int *c, int *cc);

void		ft_put_img(t_render_v **vars, void *p, int x, int y);

int			ft_window_height(t_game_map *game_map);
int			ft_window_width(t_game_map *game_map);
int			ft_whc(t_game_map *game_map);
int			ft_wwc(t_game_map *game_map);

int			ft_max_score(t_game_map *game_map);
int			ft_game_end(t_game_map *game_map);

void		ft_free_stuff(t_game_map **game_map, t_render_v **vars);
void		ft_free_map_data(char ***map_data, int size);

void		ft_wall_image(t_render_v **vars, t_game_map **map);
void		ft_star_image(t_render_v **vars, t_game_map **map);
void		ft_exit_image(t_render_v **vars, t_game_map **map);
void		ft_bg_image(t_render_v **vars, t_game_map **map);

void		ft_marvin_img(t_render_v **vars, t_game_map **map);

void		ft_tree1(t_render_v **vars, t_game_map **map);

int			ft_game_over(t_game_map **map, t_render_v **vars);

#endif
