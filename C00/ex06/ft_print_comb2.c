/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogaynel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:34:28 by rogaynel          #+#    #+#             */
/*   Updated: 2021/02/18 18:35:21 by rogaynel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	cs_wr(char c, char c1, char d, char d1)
{
	c += '0';
	c1 += '0';
	d += '0';
	d1 += '0';
	write(1, &c, 1);
	write(1, &c1, 1);
	write(1, " ", 1);
	write(1, &d, 1);
	write(1, &d1, 1);
	if ((c != '9') || (c1 != '8'))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int helper;

	a = 0;
	b = 0;
	helper = 1;
	while (a < 100)
	{
		b += helper;
		while (b < 100)
		{
			cs_wr(a / 10, a % 10, b / 10, b % 10);
			b++;
		}
		b = 0;
		a++;
		helper++;
	}
}
