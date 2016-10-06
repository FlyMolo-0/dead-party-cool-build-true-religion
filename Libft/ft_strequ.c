/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 21:11:07 by pmoran            #+#    #+#             */
/*   Updated: 2016/09/29 14:30:31 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	int a;

	a = 0;
	while (s1[a] == s2[a])
	{
		a++;
		if (s1[a] == 0)
		{
			return (1);
		}
	}
	return (0);
}
