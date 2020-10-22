/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:19:36 by agardet           #+#    #+#             */
/*   Updated: 2020/10/19 19:16:09 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_strslen(char **array, int size)
{
	int i;
	int total;

	total = 0;
	i = 0;
	while (i < size)
	{
		total = total + ft_strlen(array[i]);
		i++;
	}
	return (total);
}

char	*ft_malloc(int size)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * size);
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sep_size;
	int		i;
	int		total;
	char	*dst;

	i = 0;
	if (size == 0)
		return (ft_malloc(1));
	total = ft_strslen(strs, size);
	total += ft_strlen(sep) * size;
	if ((dst = ft_malloc(total + 1)) == NULL)
		return (NULL);
	while (i < size)
	{
		ft_strcat(dst, strs[i]);
		if (i + 1 != size && strs[i][0] != '\0')
			ft_strcat(dst, sep);
		i++;
	}
	return (dst);
}

int 	main(void)
{
	char *strs[] = {"bonjour", "", "non", "kappa"};
	printf("%s", ft_strjoin(4, strs, "caca"));
}
