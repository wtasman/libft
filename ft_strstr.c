/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 22:50:25 by wasman            #+#    #+#             */
/*   Updated: 2016/09/29 02:06:11 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return (char *)(big);
	while (big[i])
	{
		while (big[i] != little[0])
		{
			i++;
			if (big[i] == '\0')
				return (NULL);
		}
		while ((big[i + j] == little[j]) && (little[j] != '\0'))
			j++;
		if (j == ft_strlen(little))
			return (char *) (&big[i]);
	}
	return (NULL);
}
