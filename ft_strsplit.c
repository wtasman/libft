/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 01:31:33 by wasman            #+#    #+#             */
/*   Updated: 2016/10/07 12:01:34 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;
	size_t	words;

	if (!s || !c)
		return (NULL);
	words = ft_wordcount(s, c);
	array = (char**)malloc(sizeof(char *) * words);
	i = 0;
	j = 0;
	while (i < words)
	{
		while (s[j] != '\0')
		{
			while (s[j] == c)
				j++;
			i++;
			while (s[j] != c)
				j++;
		}	
		array[i] = (char *)malloc(sizeof(char));
	}
	return(array);
}
