/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 10:04:29 by wasman            #+#    #+#             */
/*   Updated: 2016/09/25 10:09:15 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_putendl(void)
{
	char	str[] = "Prompt should be here V Not Here >";

	ft_putendl(str);
}

int	main()
{
	test_ft_putendl();
	return (0);
}
