/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 04:13:13 by izouiten          #+#    #+#             */
/*   Updated: 2019/12/09 17:44:23 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	print_menu(t_fractol *fr)
{
	int		h;
	int		w;
	void	*png;
	void	*png1;

	png1 = mlx_png_file_to_image(fr->mlx, "bg.png", &h, &w);
	mlx_put_image_to_window(fr->mlx, fr->win, png1, 600, 0);
	png = mlx_png_file_to_image(fr->mlx, "bg1.png", &h, &w);
	mlx_put_image_to_window(fr->mlx, fr->win, png, 670, 300);
	mlx_put_image_to_window(fr->mlx, fr->win, png, 850, 300);
	mlx_put_image_to_window(fr->mlx, fr->win, png, 670, 380);
	mlx_put_image_to_window(fr->mlx, fr->win, png, 850, 380);
	mlx_put_image_to_window(fr->mlx, fr->win, png, 670, 460);
	mlx_put_image_to_window(fr->mlx, fr->win, png, 850, 460);
	menu1(fr);
}

void	menu1(t_fractol *fr)
{
	mlx_string_put(fr->mlx, fr->win, 620, 70, 0xFFFFFF,\
"ITERATION          :  +/-");
	mlx_string_put(fr->mlx, fr->win, 620, 130, 0xFFFFFF,\
"CHANGE COLOR       :  1/2/3");
	mlx_string_put(fr->mlx, fr->win, 850, 130, 0xFFFFFF,\
"ZOOM                :  scroll");
	mlx_string_put(fr->mlx, fr->win, 620, 190, 0xFFFFFF,\
"REST 	              :  space");
	mlx_string_put(fr->mlx, fr->win, 850, 190, 0xFFFFFF,\
"MOVE 	               :  Arrow");
	mlx_string_put(fr->mlx, fr->win, 1000, 590, 0xFFFFFF, "Exit : ESC");
	mlx_string_put(fr->mlx, fr->win, 713, 335, 0xFFFFFF, "mandelbrot");
	mlx_string_put(fr->mlx, fr->win, 910, 335, 0xFFFFFF, "julia");
	mlx_string_put(fr->mlx, fr->win, 708, 415, 0xFFFFFF, "burningship");
	mlx_string_put(fr->mlx, fr->win, 883, 415, 0xFFFFFF, "burningjulia");
	mlx_string_put(fr->mlx, fr->win, 718, 495, 0xFFFFFF, "tricorn");
	mlx_string_put(fr->mlx, fr->win, 890, 495, 0xFFFFFF, "multibrot");
}
