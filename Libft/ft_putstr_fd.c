/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 22:43:28 by pmoran            #+#    #+#             */
/*   Updated: 2016/09/24 22:44:04 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != 0)
	{
		write(fd, &str[index], 1);
		index++;
	}
}