/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 03:27:46 by izouiten          #+#    #+#             */
/*   Updated: 2019/12/09 17:44:35 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	put_pxl_to_img(t_fractol *data, int x, int y, int color)
{
	if (data->x < WIDTH && data->y < WIDTH)
	{
		color = mlx_get_color_value(data->mlx, color);
		ft_memcpy(data->img_ptr + 4 * WIDTH * y + x * 4,
				&color, sizeof(int));
	}
}

void	put_text(t_fractol *data)
{
	char	*text;
	char	*nb;

	nb = ft_itoa(data->it_max);
	text = ft_strjoin(" NB Iterations  : ", nb);
	mlx_string_put(data->mlx, data->win, 20, 20, 0x209330, text);
	ft_strdel(&text);
	ft_strdel(&nb);
	(data->fract == 1 || data->fract == 3) &&\
(mlx_string_put(data->mlx, data->win, 420, 20, 0x209330, "Pause Fractal :  p"));
}

int		mouse_hook1(int x, int y, t_fractol *data)
{
	if (x >= 670 && x <= 820 && y >= 300 && y <= 365)
	{
		data->fract = 0;
		fract_init(data);
	}
	else if (x >= 850 && x <= 1000 && y >= 300 && y <= 365)
	{
		data->fract = 1;
		fract_init(data);
	}
	else if (x >= 670 && x <= 820 && y >= 380 && y <= 445)
	{
		data->fract = 2;
		fract_init(data);
	}
	else
		mouse_hook2(x, y, data);
	return (0);
}

int		mouse_hook2(int x, int y, t_fractol *data)
{
	if (x >= 850 && x <= 1000 && y >= 380 && y <= 445)
	{
		data->fract = 3;
		fract_init(data);
	}
	else if (x >= 670 && x <= 820 && y >= 460 && y <= 525)
	{
		data->fract = 4;
		fract_init(data);
	}
	else if (x >= 850 && x <= 1000 && y >= 460 && y <= 525)
	{
		data->fract = 5;
		fract_init(data);
	}
	return (0);
}
