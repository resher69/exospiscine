/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:45:01 by agardet           #+#    #+#             */
/*   Updated: 2020/10/22 13:09:24 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include "stdlib.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return (s1);
}

char *ft_strdup(char *src)
{
	char *dst;

	if (dst = (char *)malloc(sizeof(char) * ft_strlen(src) + 1) == NULL)
		return (NULL);
	ft_strcpy(dst, src);
	return (dst);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int 		i;
	t_stock_str *tab;

	i = 0;
	if ((tab = malloc(sizeof(char) * ft_strlen(av[i]) + 1) == NULL))
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
