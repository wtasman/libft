/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 23:32:40 by wasman            #+#    #+#             */
/*   Updated: 2016/09/26 01:51:57 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	size_t	i;

	dst = (char *)dst;
	src = (const char *)src;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
}
