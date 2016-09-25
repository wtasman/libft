/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:07:47 by wasman            #+#    #+#             */
/*   Updated: 2016/09/24 21:26:53 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	nbr;
	int	sign;
	int	i;

	i = 0;
	nbr = 0;
	sign = 1;
	while (ft_isspaces(s[i]))
		s++;
	if (s[i] == '-')
	{
		i++;
		sign = (sign * -1);
	}
	if (s[i] == '+')
	{
		i++;
	}
	while(ft_isdigit(s[i]))
	{
		nbr = (nbr * 10) + (s[i] - '0');
		i++;
	}
	return (nbr * sign);
}
