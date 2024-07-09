/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alepinto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:38:33 by alepinto          #+#    #+#             */
/*   Updated: 2023/02/18 14:49:04 by alepinto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int c)
{
	if (c >= 0)
	{
		write(1, "P", 1);
	}
	else
		write (1, "N", 1);
}

/*int	main(void)
{
	ft_is_negative(-3);
	return (0);
}*/
