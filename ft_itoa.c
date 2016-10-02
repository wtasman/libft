/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 23:08:54 by wasman            #+#    #+#             */
/*   Updated: 2016/10/01 12:47:44 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_itoa(int n)
{
	/*char	*str;*/
	int		len;

	len = 1;
	while (n /= 10)
		len++;
	/*str = ft_strnew(len);*/
	return (len);
}
