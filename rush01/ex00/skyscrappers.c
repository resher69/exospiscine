/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrappers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 14:05:55 by agardet           #+#    #+#             */
/*   Updated: 2020/10/17 14:05:55 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char *get_number(char *str,int tab[4][4])
{
	int x;
	int y;
	int i;

	x = 0;
	while(str[i] != '\0')
	{
		while (x <= 4)
		{
			write(1, &str[i]), 1);
			x++;
		}
		y = 
	}
}
