/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 21:41:07 by wasman            #+#    #+#             */
/*   Updated: 2016/09/30 22:00:58 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	str = ft_strncat((char *)s1, s2, ft_strlen(s1));
	if (str == NULL)
		return (NULL);
	return (str);
}
