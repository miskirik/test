/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgermiya <hgermiya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:37:48 by hgermiya          #+#    #+#             */
/*   Updated: 2022/11/29 18:37:51 by hgermiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	ft_free_paths(char **no, char **so, char **we, char **ea)
{
	int	i;

	i = 0;
	while (no[i])
		free(no[i++]);
	free(no);
	i = 0;
	while (so[i])
		free(so[i++]);
	free(so);
	i = 0;
	while (we[i])
		free(we[i++]);
	free(we);
	i = 0;
	while (ea[i])
		free(ea[i++]);
	free(ea);
}
