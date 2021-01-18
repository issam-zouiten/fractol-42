/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 03:27:11 by izouiten          #+#    #+#             */
/*   Updated: 2019/12/09 17:43:46 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	fract_calc(t_fractol *data)
{
	if (data->it_max < 0)
		data->it_max = 0;
	if (data->fract == 0)
		mandelbrot_pthread(data);
	else if (data->fract == 1)
		julia_pthread(data);
	else if (data->fract == 2)
		burningship_pthread(data);
	else if (data->fract == 3)
		brjulia_pthread(data);
	else if (data->fract == 4)
		tricorn_pthread(data);
	else if (data->fract == 5)
		multibrot_pthread(data);
	put_text(data);
}

void	fract_init(t_fractol *data)
{
	if (data->fract == 0)
		mandelbrot_init(data);
	else if (data->fract == 1)
		julia_init(data);
	else if (data->fract == 2)
		burningship_init(data);
	else if (data->fract == 3)
		brjulia_init(data);
	else if (data->fract == 4)
		tricorn_init(data);
	else if (data->fract == 5)
		multibrot_init(data);
	fract_calc(data);
}

void	mlx_win_init(t_fractol *data)
{
	data->mlx = mlx_init();
	data->win = mlx_new_window(data->mlx, 1080, WIDTH, "Fractol");
	data->img = mlx_new_image(data->mlx, WIDTH, WIDTH);
	data->img_ptr = mlx_get_data_addr(data->img,
			&data->bpp, &data->sl, &data->endian);
}

int		fract_comp(char **av, t_fractol *data)
{
	if (ft_strcmp(av[1], "mandelbrot") == 0)
		data->fract = 0;
	else if (ft_strcmp(av[1], "julia") == 0)
		data->fract = 1;
	else if (ft_strcmp(av[1], "burningship") == 0)
		data->fract = 2;
	else if (ft_strcmp(av[1], "burningjulia") == 0)
		data->fract = 3;
	else if (ft_strcmp(av[1], "tricorn") == 0)
		data->fract = 4;
	else if (ft_strcmp(av[1], "multibrot") == 0)
		data->fract = 5;
	else
	{
		ft_putendl("Usage fractol \"mandelbrot\" \"julia  \" \"burningship \"");
		ft_putendl("              \"multibrot \" \"tricorn\" \"burningjulia\"");
		return (0);
	}
	return (1);
}

int		main(int ac, char **av)
{
	t_fractol	*data;

	if (!(data = (t_fractol *)malloc(sizeof(t_fractol))))
		return (-1);
	if (ac == 2)
	{
		mlx_win_init(data);
		if ((fract_comp(av, data)) == 0)
			return (0);
		fract_init(data);
		mlx_hook(data->win, 6, 0, mouse_julia, data);
		mlx_key_hook(data->win, key_hook, data);
		mlx_mouse_hook(data->win, mouse_hook, data);
		print_menu(data);
		mlx_loop(data->mlx);
	}
	else
	{
		ft_putendl("Usage fractol \"mandelbrot\" \"julia  \" \"burningship \"");
		ft_putendl("              \"multibrot \" \"tricorn\" \"burningjulia\"");
		return (0);
	}
	return (0);
}
