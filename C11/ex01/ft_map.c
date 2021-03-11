/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogaynel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:29:17 by rogaynel          #+#    #+#             */
/*   Updated: 2021/03/02 12:29:19 by rogaynel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *a;
	int counter;

	counter = 0;
	a = (int *)malloc(sizeof(int) * length);
	if (a == NULL)
		return (NULL);
	while (length > 0)
	{
		a[counter] = (*f)(tab[counter]);
		counter++;
		length--;
	}
	return (a);
}
