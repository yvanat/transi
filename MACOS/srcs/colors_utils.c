/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvanat <yvanat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 23:11:20 by yvanat            #+#    #+#             */
/*   Updated: 2020/02/07 23:11:21 by yvanat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/h_minirt.h"

int		prod_color_float(int objcol, double i)
{
	int rt;

	rt = 0;
	rt |= (int)(((objcol & 0xFF0000) >> 16) * i) << 16;
	rt |= (int)(((objcol & 0x00FF00) >> 8) * i) << 8;
	rt |= (int)((objcol & 0x0000FF) * i);
	return (rt);
}

int		add_color_to_color(int col1, int col2)
{
	int rt;

	rt = 0;
	rt |= ((((col1 & 0xFF0000) >> 16) + ((col2 & 0xFF0000) >> 16))) << 16;
	rt |= ((((col1 & 0x00FF00) >> 8) + ((col2 & 0x00FF00) >> 8))) << 8;
	rt |= ((col1 & 0x0000FF) + (col2 & 0x0000FF));
	return (rt);
}

int		prod_color_vec(int objcol, t_vec i)
{
	int rt;

	rt = 0;
	rt |= (int)(((objcol & 0xFF0000) >> 16) * (i.x > 1 ? 1 : i.x)) << 16;
	rt |= (int)(((objcol & 0x00FF00) >> 8) * (i.y > 1 ? 1 : i.y)) << 8;
	rt |= (int)((objcol & 0x0000FF) * (i.z > 1 ? 1 : i.z));
	return (rt);
}

int		get_color_integer(int r, int g, int b)
{
	int rt;

	rt = 0;
	rt |= r << 16;
	rt |= g << 8;
	rt |= b;
	return (rt);
}

int		comp_cols(int col1, int col2, double delta)
{
	t_vec rgb;

	rgb.x = abs(((col1 & 0xFF0000) >> 16) - ((col2 & 0xFF0000) >> 16));
	rgb.y = abs(((col1 & 0x00FF00) >> 8) - ((col2 & 0x00FF00) >> 8));
	rgb.z = abs(((col1 & 0x0000FF) - (col2 & 0x0000FF)));
	if (norm_vec(rgb) > delta)
		return (-1);
	return (0);
}
