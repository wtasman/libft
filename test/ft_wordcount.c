/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 11:20:21 by wasman            #+#    #+#             */
/*   Updated: 2016/10/03 18:45:01 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_wordcount(void)
{
	char str[] = "**Torrey**Has**Three**Letters**";
	int	i;

	i = ft_wordcount(str, '*');
	ft_putnbr(i);
}

int	main()
{
	test_ft_wordcount();
	return (0);
}
