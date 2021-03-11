/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogaynel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:43:41 by rogaynel          #+#    #+#             */
/*   Updated: 2021/02/17 16:09:01 by rogaynel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		i;
	char	l;

	i = 0;
	l = 'a';
	while (i < 26)
	{
		write(1, &l, 1);
		l++;
		i++;
	}
}