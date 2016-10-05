/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 01:31:33 by wasman            #+#    #+#             */
/*   Updated: 2016/10/04 20:00:38 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		words;

	words = ft_wordcount(s, c);
	array = (char**)malloc(sizeof(char *) * words);
	i = 0;
	while (i < words)
	{
		j = 0;
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
