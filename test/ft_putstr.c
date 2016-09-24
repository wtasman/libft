/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 16:19:31 by wasman            #+#    #+#             */
/*   Updated: 2016/09/23 16:26:48 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_putstr(void)
{
	char	str[] = "What is this string crap";
	ft_putstr(str);
}

int	main()
{
	test_ft_putstr();
	ft_putchar('\n');
	return (0);
}
