/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:14:02 by g██████           #+#    #+#             */
/*   Updated: 2021/08/23 12:11:37 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

void	ft_putnbr(int nb)
{
	char	c;
	long	l;

	l = nb;
	if (l < 0)
	{
		write(1, "-", 1);
		l = -l;
	}
	if (l >= 0 && l <= 9)
	{
		c = l + '0';
		write(1, &c, 1);
	}
	if (l > 9)
	{
		ft_putnbr(l / 10);
		ft_putnbr(l % 10);
	}
}
