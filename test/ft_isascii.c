/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 22:07:38 by wasman            #+#    #+#             */
/*   Updated: 2016/09/25 23:00:27 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_isascii(void)
{
	char	c;

	c = 0;
	while (c <= 127)
	{
		if (ft_isascii(c))
			c++;
		else
			ft_putchar('?');
	}
}

int	main()
{
	test_ft_isascii();
	return (0);
}
