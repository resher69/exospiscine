/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 11:08:41 by agardet           #+#    #+#             */
/*   Updated: 2020/10/16 13:27:22 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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

char	*ft_strdup(char *src)
{
	char *dst;

	if ((dst = (char *)malloc(sizeof(*src) * ft_strlen(src) + 1)) == NULL)
		return (NULL);
	ft_strcpy(dst, src);
	return (dst);
}
