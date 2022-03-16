/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharlet <lcharlet@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:29:46 by bcaffere          #+#    #+#             */
/*   Updated: 2022/03/16 23:41:56 by lcharlet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

/* to open */
#include <fcntl.h>

/* to close, read, write */
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>

/* to printf, perror, strerror */
#include <stdio.h>

/* to malloc, free, exit */
#include <stdlib.h>

#include <math.h>

/* mlx */
# include "../mlx/mlx.h"
// # include "../mlx/mlx_int.h"

typedef struct s_map
{
	int	x;
	int	y;
	int	max_len;

} t_map;

typedef struct s_game
{
	void	*mlx;
	void	*win;
	int		column;
	int		row;
} t_game;

void	create_game();

#endif
