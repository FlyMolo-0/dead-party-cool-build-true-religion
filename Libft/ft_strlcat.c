/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 18:43:48 by pmoran            #+#    #+#             */
/*   Updated: 2016/09/29 14:32:04 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

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

char    *ft_strcat(char *s1, char *s2, int n)
{
	int i;
	int a;
	int b;
	char *stringall;

	i = 0;
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	stringall = (char*)malloc(a + b + 1);
	stringall[a + b] = '\0';
	while (s1[i]!= '\0')
	{
		stringall[i] = s1[i];
		i++;
	}
	while (i - a < b)
	{
		stringall[i] = s2[i - a];
		i++;
	}
	return(stringall);
}
