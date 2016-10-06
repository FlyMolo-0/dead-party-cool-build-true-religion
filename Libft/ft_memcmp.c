/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 16:47:56 by pmoran            #+#    #+#             */
/*   Updated: 2016/09/29 14:01:31 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char  *a;
	const char	*b;

	a = (const char *)s1;
	b = (const char *)s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*a != *b)
			return(*a - *b);
		a++;
		b++;
	}
	return (0);
}
