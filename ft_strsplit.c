/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 01:31:33 by wasman            #+#    #+#             */
/*   Updated: 2016/10/08 01:55:08 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordlen(char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_strsplit(char *s, char c)
{
	char	**array;
	int		i;
	int		words;

	if (!s || !c)
		return (NULL);
	words = ft_wordcount(s, c);
	array = (char**)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (words--)
	{
		while (*s == c && *s != '\0')
			s++;
		array[i] = ft_strsub((const char *)s, 0, ft_wordlen(s, c));
		if (!array[i])
			return (NULL);
		s = s + ft_wordlen(s, c);
	}
	array[i] = NULL;
	return(array);
}
