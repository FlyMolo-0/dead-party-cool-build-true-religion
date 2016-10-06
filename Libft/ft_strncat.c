/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 23:27:53 by pmoran            #+#    #+#             */
/*   Updated: 2016/09/29 14:35:16 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int		ft_strlen(char *str)
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

char	*ft_strcat(char *s1, char *s2, int n)
{
	int i;
	int a;
	int b;
	char *stringall;

	i = 0;
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	stringall = (char*)malloc(a + b + 1);
	while (s1[i]!= 0)
	{
		stringall[i] = s1[i];
		i++;
	}
	while (s2[i - a] != 0 && (i - a) <= n)
	{
		stringall[i] = s2[i - a];
		i++;
	}
	stringall[i] = '\0';
	return(stringall);
}
