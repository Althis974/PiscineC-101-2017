/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 13:12:28 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/22 13:38:34 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else
	{
		if (nb < 0)
			if (nb != -2147483648)
			{
				ft_putchar('-');
				nb *= -1;
			}
		if (nb < 10)
			ft_putchar(nb + '0');
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + '0');
		}
	}
}
