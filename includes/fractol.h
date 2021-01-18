/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 03:28:45 by izouiten          #+#    #+#             */
/*   Updated: 2019/12/09 18:30:20 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdlib.h>
# include "../libft/includes/libft.h"
# include "../mlx/mlx.h"
# include "math.h"
# include "pthread.h"
# define WIDTH 600
# define THREAD_WIDTH 5
# define THREAD_NUMBER 120

typedef struct	s_fractol
{
	void		*mlx;
	void		*win;
	void		*img;
	void		*img_ptr;
	int			endian;
	int			sl;
	int			bpp;
	int			fract;
	int			color;
	int			julia_mouse;
	int			x;
	int			y;
	int			y_max;
	int			it;
	int			it_max;
	long double	zoom;
	long double	x1;
	long double	y1;
	long double	c_r;
	long double	c_i;
	long double	bjr;
	long double	bji;
	long double	z_r;
	long double	z_i;
	long double	tmp;
}				t_fractol;

int				key_hook(int keycode, t_fractol *data);
int				key_hook2(int keycode, t_fractol *data);
void			ft_zoom(int x, int y, t_fractol *data);
void			ft_dezoom(int x, int y, t_fractol *data);
int				mouse_hook(int mousecode, int x, int y, t_fractol *data);

void			mandelbrot_init(t_fractol *data);
void			mandelbrot_calc(t_fractol *data);
void			*mandelbrot(void *tab);
void			mandelbrot_pthread(t_fractol *data);

int				mouse_julia(int x, int y, t_fractol *data);
void			julia_init(t_fractol *data);
void			julia_calc(t_fractol *data);
void			*julia(void *tab);
void			julia_pthread(t_fractol *data);

void			brjulia_init(t_fractol *data);
void			brjulia_calc(t_fractol *data);
void			*burningjulia(void *tab);
void			brjulia_pthread(t_fractol *data);

void			burningship_init(t_fractol *data);
void			burningship_calc(t_fractol *data);
void			*burningship(void *tab);
void			burningship_pthread(t_fractol *data);

void			tricorn_init(t_fractol *data);
void			tricorn_calc(t_fractol *data);
void			*tricorn(void *tab);
void			tricorn_pthread(t_fractol *data);

void			multibrot_init(t_fractol *data);
void			multibrot_calc(t_fractol *data);
void			*multibrot(void *tab);
void			multibrot_pthread(t_fractol *data);

void			put_pxl_to_img(t_fractol *data, int x, int y, int color);
void			put_text(t_fractol *data);

void			fract_calc(t_fractol *data);
void			fract_init(t_fractol *data);
void			mlx_win_init(t_fractol *data);
int				fract_comp(char **av, t_fractol *data);
void			print_menu(t_fractol *fr);
void			menu1(t_fractol *fr);
int				mouse_hook1(int x, int y, t_fractol *data);
int				mouse_hook2(int x, int y, t_fractol *data);

#endif
