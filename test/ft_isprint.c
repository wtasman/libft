/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 10:09:42 by wasman            #+#    #+#             */
/*   Updated: 2016/09/25 22:20:13 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void test_ft_isprint(void)
{
	int	i;

	i = 0;
	char	str[] = "\n\t\f\v\rI prom\vise this had nonpri\tntable cha\nracters";
	while (str[i] != '\0')
	{
		if (ft_isprint(str[i]))
			ft_putchar(str[i]);
		i++;
	}
}

int	main()
{
	test_ft_isprint();
	return (0);
}
