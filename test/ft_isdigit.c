/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 10:40:13 by wasman            #+#    #+#             */
/*   Updated: 2016/09/25 14:49:02 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_isdigit(void)
{
	int	i;

	i = 0;
	char	str[] = "2390457829804374983798745908327therewereabunchofnumbers";
	while (ft_isdigit(str[i]))
		i++;
	while (str[i] != '\0')
	{
		
	}
}

int	main()
{
	test_ft_isdigit();
	return (0);
}
