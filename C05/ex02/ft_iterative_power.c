/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogaynel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:22:52 by rogaynel          #+#    #+#             */
/*   Updated: 2021/02/23 12:23:15 by rogaynel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_iterative_power(int nb, int power)
{
	int i;
	int new;

	i = 0;
	new = 1;
	if (power == 0)
	{
		new = 1;
	}
	if (power > 0)
	{
		while (i < power)
		{
			new *= nb;
			i++;
		}
	}
	if (power < 0)
		new = 0;
	return (new);
}
