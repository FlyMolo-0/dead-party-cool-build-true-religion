/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 21:08:45 by pmoran            #+#    #+#             */
/*   Updated: 2016/09/29 14:48:15 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int a;

	a = 0;
	while (*str != 0)
	{
		str++;
		a++;
	}
	return (a);
}

int	ft_strmapi(char const *s, char (*f)(char))
{
	int i;
	int len;
	char *str;

	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc((sizeof(char) * i));
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
