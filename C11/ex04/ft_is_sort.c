/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogaynel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:43:37 by rogaynel          #+#    #+#             */
/*   Updated: 2021/03/02 19:22:14 by rogaynel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int up;
	int down;

	i = 0;
	up = 0;
	down = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
		{
			up++;
			if (down > 0)
				return (0);
		}
		if ((*f)(tab[i], tab[i + 1]) < 0)
		{
			down++;
			if (up > 0)
				return (0);
		}
		i++;
	}
	return (1);
}
