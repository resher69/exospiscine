/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chervy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 09:24:52 by chervy            #+#    #+#             */
/*   Updated: 2020/10/17 14:13:56 by chervy           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (-2147483648 == nb)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb > 0)
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else if (nb == 0)
	{
		ft_putchar('0');
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
}


void	ft_create_view(int  view[4][4], char *str)
{
	int x;
	int y;
	int i;

	x = 0;
	y = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((i + 1) % 8 == 0 && i != 0)
		{
			x = 0;
			y++;
		}
		if (i % 2 == 0)
		{
			view[x][y] = str[i];
			x++;
		}
		i++;
	}
}

void	ft_print_map(int map[4][4])
{
	int x;
	int y;

	x = 0;
	y = 0;
	


int		main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	int view[4][4];
	ft_create_view(view, argv[1]);
	ft_print_map(view);
	return (0);
}
