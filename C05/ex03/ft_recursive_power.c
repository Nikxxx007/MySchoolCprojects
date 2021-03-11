/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogaynel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:58:25 by rogaynel          #+#    #+#             */
/*   Updated: 2021/02/23 12:58:30 by rogaynel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_recursive_power(int nb, int power)
{
	int new;

	new = 1;
	if (power < 0)
		return (0);
	else
	{
		if (power == 0)
			return (1);
		else
		{
			new *= nb;
			power--;
			return (new * ft_recursive_power(new, power));
		}
	}
}
