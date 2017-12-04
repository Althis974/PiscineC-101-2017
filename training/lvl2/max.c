/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 09:14:37 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/26 11:14:06 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				cpy;

	i = 0;
	cpy = tab[0];
	while (i < len)
	{
		if (cpy < tab[i])
			cpy = tab[i];
		++i;
	}
	if (i == len)
		return (cpy);
	return (0);
}
