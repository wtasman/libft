/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 20:12:20 by wasman            #+#    #+#             */
/*   Updated: 2016/09/25 21:40:59 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_strrev(void)
{
	char	str[] = "I want to use RacecaR but that is dumb";
	ft_strrev(str);
	ft_putstr(str);
}

int	main()
{
	test_ft_strrev();
	return (0);
}
