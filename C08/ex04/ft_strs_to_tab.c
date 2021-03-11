/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogaynel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 21:48:28 by rogaynel          #+#    #+#             */
/*   Updated: 2021/02/27 21:48:30 by rogaynel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"


struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ptr;
	int			i;

	i = 0;
	ptr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < ac)
	{
		(ptr + i)->size = ft_strlen(*(av + i));
		(ptr + i)->str = *(av + i);
		(ptr + i)->copy = malloc(ft_strlen(*(av + i)) + 1);
		(ptr + i)->copy = ft_strcpy((ptr + i)->copy, *(av + i));
		if ((ptr + i)->copy == NULL)
			return (NULL);
		i++;
	}
	(ptr + i)->str = NULL;
	return (ptr);
}
