/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 11:59:18 by wasman            #+#    #+#             */
/*   Updated: 2016/09/25 10:05:25 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_putendl_fd(void)
{
	char	str[] = "There have better be a newline";

	ft_putendl_fd(str, 1);
}

int	main()
{
	test_ft_putendl_fd();

	return (0);
}
