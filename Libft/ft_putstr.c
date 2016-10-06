/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 21:46:45 by pmoran            #+#    #+#             */
/*   Updated: 2016/09/24 22:43:18 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != 0)
	{
		ft_putchar(str[index]);
		index++;
	}
}
