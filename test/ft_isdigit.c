/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 10:40:13 by wasman            #+#    #+#             */
/*   Updated: 2016/09/25 22:30:22 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_isdigit(void)
{
	int	i;

	i = 0;
	char	str[] = "23901234567890908327the1re3we4rea6buncho7fnu8mb8ers";
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]))
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
	test_ft_isdigit();
	return(0);
}
