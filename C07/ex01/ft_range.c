/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogaynel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:47:09 by rogaynel          #+#    #+#             */
/*   Updated: 2021/02/25 17:48:24 by rogaynel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *nbs;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	nbs = (int *)malloc((max - min) * sizeof(int));
	if (nbs == NULL)
		return (NULL);
	while (min < max)
	{
		nbs[i] = min;
		i++;
		min++;
	}
	return (nbs);
}
