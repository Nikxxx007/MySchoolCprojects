/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogaynel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:10:53 by rogaynel          #+#    #+#             */
/*   Updated: 2021/02/22 10:10:55 by rogaynel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		counter;
	char	temp;

	counter = 0;
	while (str[counter] != '\0')
	{
		temp = str[counter];
		write(1, &temp, 1);
		counter++;
	}
}
