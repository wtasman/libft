/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 00:19:55 by wasman            #+#    #+#             */
/*   Updated: 2016/09/26 11:48:54 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	unsigned char *nb = (unsigned char*)b;
	while (i < len)
	{
		nb[i] = c;
		i++;
	}
	ft_putendl(b);
	return (b);
}
