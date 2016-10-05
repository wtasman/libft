/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 23:08:54 by wasman            #+#    #+#             */
/*   Updated: 2016/10/02 13:39:47 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;
	int		i;

	len = 1;
	while (n /= 10)
		len++;
	str = (char*)malloc(sizeof(char) * (len + 2));
	if (str == NULL)
		return (NULL);
	sign = 1;
	if (n < 0)
	{
		sign = -sign;
		n = -n;
	}
	i = 0;
	while (n > 10)
		str[++i] = ((n % 10) + '0');
		n /= 10;
	str = ft_strrev(str);
	if (sign < 0)
		str[0] = '-';
	str[len + 2] = '\0';
	return (str);
}
