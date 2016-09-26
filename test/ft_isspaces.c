/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspaces.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:09:04 by wasman            #+#    #+#             */
/*   Updated: 2016/09/25 22:21:12 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void test_ft_isspaces()
{
	int	i;

	i = 0;
	char	str[] = "\n \t \v \f \rI promise this had all the spaces";
	while(str[i] != '\0')
	{
		if (ft_isspaces(str[i]))
			i++;
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

int	main()
{
	test_ft_isspaces();
	return (0);
}
