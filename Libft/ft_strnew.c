/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 13:59:40 by pmoran            #+#    #+#             */
/*   Updated: 2016/09/29 14:37:22 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *new;
	new = malloc(sizeof(char) * size);
	while(size)
	{
		if(new[size - 1])
			return(NULL);
		*new[size] = '\0';
		size--;
	}
	return(new);
}

