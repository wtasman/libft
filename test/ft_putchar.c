/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 20:58:27 by wasman            #+#    #+#             */
/*   Updated: 2016/09/24 00:12:29 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_printables(void)
{
	char c;
	
	c = ' ';
	while (c <= '~')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
}

int main()
{
	test_printables();
	return (0);
}
