/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:45:51 by agardet           #+#    #+#             */
/*   Updated: 2020/10/22 10:52:38 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max || (tab = (int *)malloc(sizeof(*tab) * (max - min))) == NULL)
		return (NULL);
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (i);
}

