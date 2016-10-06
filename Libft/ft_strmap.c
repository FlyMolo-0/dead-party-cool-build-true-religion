/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 20:56:01 by pmoran            #+#    #+#             */
/*   Updated: 2016/09/29 14:32:50 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int     ft_strlen(char *str)
{
	int a;
	a = 0;

	while(*str != 0)
	{
		str++;
		a++;
	}
	return(a);
}

int		ft_strmap(char const *s, char (*f)(char))
{
	int i;
	int len;
	char *str;

	i = 0;
	len = ft_strlen(s);
	str = (char*)malloc((sizeof(char)*i));
	while (i < len)
	{
		str[i] = f(s[i]);
		i++;
	}
	return(str);
}
