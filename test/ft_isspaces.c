/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspaces.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:09:04 by wasman            #+#    #+#             */
/*   Updated: 2016/09/24 21:37:54 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void test_ft_isspaces()
{
	int	i;

	i = 0;
	char	str[] = "\n \t \v \f \rIpromisethishadallthespaces";
	while (ft_isspaces(str[i]))
	{
		i++;
	}
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main()
{
	test_ft_isspaces();
	return (0);
}
