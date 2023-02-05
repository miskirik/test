/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgermiya <hgermiya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:37:32 by hgermiya          #+#    #+#             */
/*   Updated: 2022/12/23 18:47:38 by hgermiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	cealing_color(t_cub3d *cub3d)
{
	int	x;
	int	y;

	x = 0;
	while (x < cub3d->width)
	{
		y = 0;
		while (y < cub3d->height / 2)
		{
			cub3d->screen_img_data[y * cub3d->width + x] = cub3d->c_hex;
			y++;
		}
		x++;
	}
}

void	floor_color(t_cub3d *cub3d)
{
	int	x;
	int	y;

	x = 0;
	y = cub3d->height / 2;
	while (x < cub3d->width && y < cub3d->height)
	{
		cub3d->screen_img_data[y * cub3d->width + x] = cub3d->f_hex;
		x++;
		if (x == cub3d->width)
		{
			y++;
			x = 0;
		}
	}
}
