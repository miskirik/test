/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgermiya <hgermiya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:36:42 by hgermiya          #+#    #+#             */
/*   Updated: 2022/12/23 18:47:10 by hgermiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	no_start(t_cub3d *cub3d, int a, int b)
{
	cub3d->no = mlx_xpm_file_to_image(cub3d->mlx, \
	cub3d->no_path, &a, &b);
	cub3d->no_data = (int *)mlx_get_data_addr(cub3d->no, \
	&cub3d->bit_per_pixel, &cub3d->size_line, &cub3d->endian);
}

void	so_start(t_cub3d *cub3d, int a, int b)
{
	cub3d->so = mlx_xpm_file_to_image(cub3d->mlx, \
	cub3d->so_path, &a, &b);
	cub3d->so_data = (int *)mlx_get_data_addr(cub3d->so, \
	&cub3d->bit_per_pixel, &cub3d->size_line, &cub3d->endian);
}

void	ea_start(t_cub3d *cub3d, int a, int b)
{
	cub3d->ea = mlx_xpm_file_to_image(cub3d->mlx, \
	cub3d->ea_path, &a, &b);
	cub3d->ea_data = (int *)mlx_get_data_addr(cub3d->ea, \
	&cub3d->bit_per_pixel, &cub3d->size_line, &cub3d->endian);
}

void	we_start(t_cub3d *cub3d, int a, int b)
{
	cub3d->we = mlx_xpm_file_to_image(cub3d->mlx, \
	cub3d->we_path, &a, &b);
	cub3d->we_data = (int *)mlx_get_data_addr(cub3d->we, \
	&cub3d->bit_per_pixel, &cub3d->size_line, &cub3d->endian);
}
