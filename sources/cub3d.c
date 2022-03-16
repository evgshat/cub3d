/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharlet <lcharlet@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:19:34 by bcaffere          #+#    #+#             */
/*   Updated: 2022/03/16 23:30:02 by lcharlet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

//moves -> wasd
//arrow (left, right) -> rotate
//esc and red exit-> exit

/*
about map:
0 - empty space
1 - wall
N,S,E,W - spawn position and orientation
*/

// void	map_pars(char *map)
// {
// 	int	fd;

// 	fd = open(map, O_RDONLY);
// 	if (fd < 0)
// 		err_msg("map not open");


// }

// void	play(t_game *game, char *map)
// {
// 	(void)game;
// 	printf("%s\n", map);
// 	map_pars(map);
// }

// void	err_msg(char *str)
// {
// 	printf("Error: %s\n", str);
// 	exit(1);
// }

int	main(int argc, char *argv[])
{
	t_game	game;
	(void) argc;
	(void) argv;

	// if (argc == 1)
	// 	err_msg("map not given.");
	// if (argc > 2)
	// 	err_msg("too mach arguments.");
	// play(&game, argv[1]);
	create_game(&game);
	return (0);
}
