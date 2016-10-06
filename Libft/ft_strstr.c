/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 22:00:37 by pmoran            #+#    #+#             */
/*   Updated: 2016/09/29 14:37:48 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	int b;
	int a;
	int c;

	a = 0;
	b = 0;
	c = 0;
	if (to_find == 0)
	{
		return (str);
	}
	while (str[a] != 0)
	{
		while (str[a] == to_find[b])
		{
			b++;
			if (to_find[b] == 0)
				return (str + c);
			a++;
		}
		a++;
		b = 0;
		c = a;
	}
	return (0);
}
