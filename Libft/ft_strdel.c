/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 14:05:12 by pmoran            #+#    #+#             */
/*   Updated: 2016/09/29 14:27:48 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}

