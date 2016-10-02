/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 11:24:15 by wasman            #+#    #+#             */
/*   Updated: 2016/10/01 20:25:01 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	j;
	size_t	i;
	size_t	len;
	char	*cpy;

	if (s)
	{
		if (ft_strlen(s) == 0)
			return ("");
		i = 0;
		len = ft_strlen((char *)(s)) - 1;
		while (ft_isspace(s[i]))
			i++;
		cpy = (char *)malloc(sizeof(char) * (len - i + 1));
		if (cpy == NULL)
			return (NULL);
		while (ft_isspace(s[len]) && (len > 0))
			len--;
		j = 0;
		while (i <= len)
			ft_strcpy(&cpy[j++], &s[i++]);
		cpy[j] = '\0';
		return (cpy);
	}
	return (NULL);
}
