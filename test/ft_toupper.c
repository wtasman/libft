/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 09:53:54 by wasman            #+#    #+#             */
/*   Updated: 2016/09/25 10:01:54 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	test_ft_toupper(void)
{
	char	str[] = "EvErY OtHeR LeTtEr wAs lOwErCaSe";
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_toupper(str[i]);
		ft_putchar(str[i]);
		i++;
	}
}

int	main()
{
	test_ft_toupper();
	return (0);
}
