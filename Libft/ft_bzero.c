/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:31:22 by pmoran            #+#    #+#             */
/*   Updated: 2016/09/22 15:37:18 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void    ft_bzero(void *b, size_t len)
{
	unsigned char   *cur;

	if (len == 0)
		return;
	cur = (unsigned char *)b;
	while (len--)
	{
		*cur = (unsigned char)0;
		if (len)
			cur++;
	}
	return;
}

int main()
{
	int a[3] = {1, 2, 3};
	int c;
	size_t n;
	int *b;

	c = 3;
	n = 3;
	ft_bzero(a, n);
	printf("%i\n", a[0]);
	a[0] = 1;
	bzero(a, n);
	printf("%i", a[0]);
	return(0);
}
