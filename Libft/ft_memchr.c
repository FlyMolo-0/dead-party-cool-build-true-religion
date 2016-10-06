/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 14:18:47 by pmoran            #+#    #+#             */
/*   Updated: 2016/09/29 13:57:55 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*target;
	const char	*a;
	int i;

	a = (const char *)s;
	i = 0;
	if (n == 0 || c == a[0])
		return (s);
	while (n--)
	{
		if (c == *a)
			return(s);
		s++;
		a++;
	}
	return (NULL);
}
