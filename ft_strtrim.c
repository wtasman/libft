/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 11:24:15 by wasman            #+#    #+#             */
/*   Updated: 2016/09/29 13:02:21 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;
	char	*cpy;

	i = 0;
	len  = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	while (ft_isspaces(s[i]))
		i++;
	while (ft_isspaces(s[len]))
		len--;		
	len -= i;
	cpy = ft_memalloc(len + 1);
	if (cpy == NULL)
		return (NULL);
	while (len > 0)
	{
		*cpy++ = s[i++];
		len--;
	}
	*cpy = '\0';
	return (cpy);
}
