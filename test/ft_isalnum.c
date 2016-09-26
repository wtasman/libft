/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 22:32:39 by wasman            #+#    #+#             */
/*   Updated: 2016/09/25 22:40:49 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_isalnum(void)
{
	int	i;

	i = 0;
	char	str[] = "I gu\tess t\nhis is \fthe op\vposite of ft_is\rspaces1234567890";
	while (str[i] != '\0')
	{
		if (ft_isalnum(str[i]))
		{
			ft_putchar(str[i]);
			i++;
		}
		else
			i++;
	}
}

int	main()
{
	test_ft_isalnum();
	return (0);
}
