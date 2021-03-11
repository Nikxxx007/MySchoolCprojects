/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogaynel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:08:02 by rogaynel          #+#    #+#             */
/*   Updated: 2021/03/02 17:11:22 by rogaynel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			counter++;
		i++;
	}
	return (counter);
}
