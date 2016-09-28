/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 11:36:48 by wasman            #+#    #+#             */
/*   Updated: 2016/09/27 13:52:01 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*ns;

	ns = (const char *)s;
	i = 0;
	while (n--)
	{
		if (*ns != c)
			ns++;
		else
			return ((void *)ns);
	}
	return (0);
}
