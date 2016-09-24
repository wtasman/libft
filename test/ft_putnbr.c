/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 15:17:36 by wasman            #+#    #+#             */
/*   Updated: 2016/09/24 15:21:36 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_putnbr(void)
{
	int	i;

	i = 123456789;
	ft_putnbr(i);
}

int	main()
{
	test_ft_putnbr();
	return (0);
}
