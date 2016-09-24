/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 10:23:34 by wasman            #+#    #+#             */
/*   Updated: 2016/09/24 10:32:25 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_putstr_fd(void)
{
	char str[] = "Come on ONE TIME!!!";
	ft_putstr_fd(str, 1);
}

int	main()
{
	test_ft_putstr_fd();
	return (0);
}
