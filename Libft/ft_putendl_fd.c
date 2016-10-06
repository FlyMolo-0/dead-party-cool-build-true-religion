/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 22:44:23 by pmoran            #+#    #+#             */
/*   Updated: 2016/09/24 22:46:40 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *str)
{
	int index;

	index = 0;
	while (str[index] != 0)
	{
		ft_putchar_fd(str[index]);
		index++;
	}
	ft_putchar_fd('\n');
}
