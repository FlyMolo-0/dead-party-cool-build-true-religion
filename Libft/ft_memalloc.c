/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 21:24:34 by pmoran            #+#    #+#             */
/*   Updated: 2016/09/29 13:53:44 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memalloc(size_t size)
{
	void *new;

	new = malloc(size);
	if(new == NULL)
		return(NULL);
	while(size)
	{
		new[size] = 0;
		size--;
	}
	return(new);
}
