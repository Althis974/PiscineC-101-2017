/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gimme_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 13:33:07 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/25 13:57:47 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		gimme_value(char **tab, char c)
{
	int i;
	int j;
	int count;

	j = 0;
	count = 0;
	while (tab[j])
	{
		i = 0;
		while (tab[j][i])
		{
			if (tab[j][i] == c)
			{
				count++;
			}
			i++;
		}
		j++;
	}
	return (count);
}
