/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 18:37:26 by agardet           #+#    #+#             */
/*   Updated: 2020/10/22 11:43:07 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
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

int		baselen(char *str)
{
	unsigned int len;
	unsigned int i;

	len = 0;
	while (str[len] != '\0')
	{
		i = len + 1;
		if (str[len] == '+' || str[len] == '-')
			return (0);
		while (str[i] != '\0')
		{
			if (str[len] == str[i])
				return (0);
			i++;
		}
		if ((str[len] >= 9 && str[len] <= 13) || str[len] == 32)
			return (0);
		len++;
	}
	return (len < 2 ? 0 : len);
}

int	ft_inbase(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	long nb;
	long sign;
	int len;

	i = 0;
	nb = 0;
	sign = 1;
	len = baselen(base);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (ft_inbase(str[i], base) != -1)
	{
		nb = (nb * len) + (ft_inbase(str[i], base));
		i++;
	}
	return (nb * sign);
}

void	ft_recursive(long i, char *base, int len, char *str)
{
	if (i >= len)
	{
		ft_recursive(i / len, base, len, str);
		ft_recursive(i % len, base, len, str);
	}
	else
		str[ft_strlen(str)] = base[i];
}

int	ft_countdigit(long nb, char *base)
{
	int i;
	int len;

	len = ft_strlen(base);
	i = 1;
	while (nb >= len)
	{
		nb /= len;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(int nbr, char *base)
{
	long	i;
	int		len;
	char	*str;

	i = nbr;
	len = baselen(base);
	str = ft_malloc(sizeof(char) * ft_countdigit(i, base) + 2);
	i = nbr;
	if (i < 0)
	{
		str[0] = '-';
		i = i * (-1);
	}
	ft_recursive(i, base, len, str);
	return (str);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int result;
	char *str;

	result = ft_atoi_base(nbr, base_from);
	str = ft_itoa_base(result, base_to);
	return (str);
}

int main()
{
	printf("%s", ft_convert_base("ff", "0123456789abcdef", "01"));
}