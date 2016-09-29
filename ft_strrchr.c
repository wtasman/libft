/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 22:40:53 by wasman            #+#    #+#             */
/*   Updated: 2016/09/28 22:48:05 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	n;

	n = ft_strlen(s);
	str = (char *)s;
	while (n > 0)
	{
		if (str[n] == c)
			return (&str[n]);
		n--;
	}
	return (NULL);
}
