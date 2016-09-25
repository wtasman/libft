/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 09:45:18 by wasman            #+#    #+#             */
/*   Updated: 2016/09/25 10:02:25 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_tolower(void)
{
	char str[] = "EvErY OtHeR LeTtEr wAs cApItAlIzEd";
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_tolower(str[i]);
		ft_putchar(str[i]);
		i++;
	}
}

int	main()
{
	test_ft_tolower();
	return (0);
}
