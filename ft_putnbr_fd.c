/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 13:39:14 by wasman            #+#    #+#             */
/*   Updated: 2016/09/28 19:50:40 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	i;

	i = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = -n;
	}
	else
		i = n;
	if (i > 10)
	{
		ft_putnbr_fd((i / 10), fd);
		ft_putchar_fd((i % 10) + '0', fd);
	}
	else
		ft_putchar_fd(i + '0', fd);
}
