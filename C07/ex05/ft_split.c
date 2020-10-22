/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 18:18:13 by agardet           #+#    #+#             */
/*   Updated: 2020/10/21 19:43:03 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	char *s1_cpy;
	char *s2_cpy;

	s1_cpy = s1;
	s2_cpy = s2;
	while (n > 0 && (*s1_cpy != '\0' || *s2_cpy != '\0'))
	{
		if (*s1_cpy == *s2_cpy && n > 1)
		{
			s2_cpy++;
			s1_cpy++;
		}
		else
			break ;
		--n;
	}
	return (*s1_cpy - *s2_cpy);
}

int	*ft_malloc(int size)
{
	int	*tab;
	int		i;

	i = 0;
	tab = (int *)malloc(sizeof(int) * size);
	while (i < size)
	{
		tab[i] = '\0';
		i++;
	}
	return (tab);
}

int ft_strcount(char *str, char *charset)
{
	int ret;
	int i;

	i = 0;
	ret = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] != '\0')
		{
			if (ft_strncmp(str[i] == charset[j]))
				ret++;
			j++;
		}
	}
}
char *ft_strstr(char *str, char *charset)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (charset[j] != '\0')
		j++;
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], charset, j) == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}

//  char 	**ft_split(char *str, char *charset)
//  {

//  }

int main()
{
	char s1[100] = "bonjour jesuis reshe oui;";
	char s2[10] = "jesuis";
	printf("%s", ft_strstr(s1, s2));
	
}