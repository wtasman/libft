/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 10:49:36 by wasman            #+#    #+#             */
/*   Updated: 2016/09/27 16:45:24 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*ndst;
	const char		*nsrc;

	i = 0;
	ndst = (char *)dst;
	nsrc = (const char *)src;
	while (i < n)
	{
		ndst[i] = nsrc[i];
		i++;
		if (nsrc[i] == c)
		{
			ndst[i] = nsrc[i];
			i++;
			return ((void *)&ndst[i]);
		}
	}
	return (NULL);
}
