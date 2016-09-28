/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 17:11:49 by wasman            #+#    #+#             */
/*   Updated: 2016/09/27 22:16:27 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;
	int		i;

	len = ft_strlen(s1);
	s2 = ft_memalloc(len + 1);
	i = 0;
	if (s2 == NULL)
		return (0);
	ft_memcpy(s2, s1, len);
	s2[len] = '\0';
	return (s2);
}
