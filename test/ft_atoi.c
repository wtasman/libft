/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 21:39:09 by wasman            #+#    #+#             */
/*   Updated: 2016/10/07 14:23:17 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	test_ft_atoi(void)
{
	int	n;

	n = ft_atoi("+-123");
	return (n);
}

int	main()
{
	int	n;

	n = atoi("+-123");
	ft_putnbr(n);
	ft_putnbr(test_ft_atoi());
	return (0);
}
