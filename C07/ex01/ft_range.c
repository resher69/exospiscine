/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:20:37 by agardet           #+#    #+#             */
/*   Updated: 2020/10/21 19:23:39 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	*ft_range(int min, int max)
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
	return (tab);
}

int	main(int argc, char **argv)
{
	int *tab = ft_range(50, 2000);
	int i;

	i = 0;
	while (i < 1950)
	{
		printf("%d ", tab[i]);
		i++;
	}
	free(tab);
}
