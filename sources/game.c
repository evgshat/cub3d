/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharlet <lcharlet@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:13:38 by lcharlet          #+#    #+#             */
/*   Updated: 2022/03/17 00:01:18 by lcharlet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	init_data(t_game *game)
{
	game->column = 1; // парсер
	game->column = 1; // парсер
	game->mlx = mlx_init();
	game->win = mlx_new_window(game->mlx,
			game->column * 64, game->row * 64, "cub3d");
}

void	create_game()
{
	t_game	game;

	init_data(&game);
	// код
	mlx_loop(game.mlx);
}
