/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 01:33:13 by wasman            #+#    #+#             */
/*   Updated: 2016/09/26 11:48:23 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*ndst = (char *)dst;
	char	*nsrc = (char *)src;

	i = 0;
	while (i < len)
	{
		ndst[i] = nsrc[i];
		i++;
	}
	return (dst);
}
