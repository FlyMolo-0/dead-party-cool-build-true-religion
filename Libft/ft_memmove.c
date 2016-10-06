/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 13:30:25 by pmoran            #+#    #+#             */
/*   Updated: 2016/09/29 14:00:20 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char    *c1;
	char    *c2;
	char	*buf;
	int i;

	if (n == 0 || dest == src)
		return (dest);
	c1 = (char *)dest;
	c2 = (char *)src;
	buf = (char *)malloc(sizeof(char) * n);
	i = 0;
	while (i < n)
		buf[i++] = *c2++;
	while (n--)
		*c1++ = *buf++;
	*c1 = *c2;
	return (dest);
}
