/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 03:26:45 by izouiten          #+#    #+#             */
/*   Updated: 2019/12/09 17:44:04 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int		key_hook2(int keycode, t_fractol *data)
{
	(keycode == 19) && (data->color = 2050);
	(keycode == 20) && (data->color = 2350);
	(keycode == 35) && (data->julia_mouse = !data->julia_mouse);
	return (0);
}

int		key_hook(int keycode, t_fractol *data)
{
	if (keycode == 53)
		exit(1);
	else if (keycode == 49)
		fract_init(data);
	(keycode == 69) && (data->it_max += 10);
	(keycode == 78) && (data->it_max -= 10);
	(keycode == 123) && (data->x1 += 30 / data->zoom);
	(keycode == 124) && (data->x1 -= 30 / data->zoom);
	(keycode == 126) && (data->y1 += 30 / data->zoom);
	(keycode == 125) && (data->y1 -= 30 / data->zoom);
	(keycode == 18) && (data->color = 1114916);
	key_hook2(keycode, data);
	fract_calc(data);
	return (0);
}

void	ft_zoom(int x, int y, t_fractol *data)
{
	data->x1 = (x / data->zoom + data->x1) - (x / (data->zoom * 1.3));
	data->y1 = (y / data->zoom + data->y1) - (y / (data->zoom * 1.3));
	data->zoom *= 1.3;
	data->it_max += 30;
}

void	ft_dezoom(int x, int y, t_fractol *data)
{
	data->x1 = (x / data->zoom + data->x1) - (x / (data->zoom / 1.3));
	data->y1 = (y / data->zoom + data->y1) - (y / (data->zoom / 1.3));
	data->zoom /= 1.3;
	data->it_max -= 30;
}

int		mouse_hook(int mousecode, int x, int y, t_fractol *data)
{
	if (mousecode == 1)
		mouse_hook1(x, y, data);
	else if (mousecode == 4)
		ft_zoom(x, y, data);
	else if (mousecode == 5)
		ft_dezoom(x, y, data);
	fract_calc(data);
	return (0);
}
